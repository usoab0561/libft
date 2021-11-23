/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:50 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:19:50 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const void	*dstp = dst;

	if (!dst && !src)
		return (NULL);
	while (n--)
		*((unsigned char *)dstp++) = *((unsigned char *)src++);
	return (dst);
}
