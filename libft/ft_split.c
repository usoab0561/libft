/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:21 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:21 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static size_t	ft_splitcnt(char const *s, char c)
{
	char	flg;
	size_t	cnt;

	if (!s)
		return (0);
	cnt = 0;
	flg = 1;
	while (*s)
	{
		if (*s == c)
			flg = 1;
		else
		{
			(flg == 1) ? cnt++ : cnt;
			flg = 0;
		}
		s++;
	}
	return (cnt);
}

static void		ft_freeall(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

char			**ft_split(char const *s, char c)
{
	const size_t	splitcnt = ft_splitcnt(s, c);
	const char		*p = s;
	char			**ret;
	char			*end;
	size_t			i;

	if (!s || !(ret = ft_calloc(splitcnt + 1, sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < splitcnt)
	{
		if (*s != c)
		{
			if (!(end = ft_strchr(s, c)))
				end = (char *)p + ft_strlen(p);
			if (!(ret[i++] = ft_strndup(s, end - s)))
			{
				ft_freeall(ret);
				return (NULL);
			}
			s = end;
		}
		s++;
	}
	return (ret);
}
