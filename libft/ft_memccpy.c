/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:38 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:19:38 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
					size_t n)
{
	const void	*p = ft_memchr(src, c, n);

	if (p != NULL)
	{
		n = p - src + 1;
		return (ft_memcpy(dst, src, n) + n);
	}
	ft_memcpy(dst, src, n);
	return (NULL);
}
