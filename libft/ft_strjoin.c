/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:30 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:30 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc((str_len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(str + ft_strlcpy(str, s1, str_len + 1), s2, str_len + 1);
	return (str);
}
