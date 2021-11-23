/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:46 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:19:47 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int res;

	while (n--)
	{
		if ((res = *((unsigned char *)s1++) - *((unsigned char *)s2++)))
			return (res);
	}
	return (0);
}
