/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:59 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:59 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	needle_len = ft_strlen(needle);

	if (*needle)
	{
		if (len == 0)
			return (NULL);
		while (len-- && ft_strncmp(haystack, needle, needle_len) != 0)
		{
			if (len < needle_len)
				return (NULL);
			if (*haystack == '\0')
				return (NULL);
			haystack++;
		}
	}
	return ((char *)haystack);
}
