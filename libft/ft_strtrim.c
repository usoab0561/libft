/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:21:08 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:21:09 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rear;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
			break ;
		s1++;
	}
	rear = (char *)s1 + (ft_strlen(s1) - 1);
	while (rear >= s1)
	{
		if (!(ft_strchr(set, *rear)))
			break ;
		rear--;
	}
	return (ft_strndup(s1, ++rear - s1));
}
