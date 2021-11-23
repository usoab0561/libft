/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:50 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:51 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	const size_t	len = ft_strnlen(s1, n);
	char			*dst;

	if (!(dst = malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
