/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:16 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:18:23 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	mem = count * size;
	void			*p;

	if (!(p = malloc(mem)))
		return (NULL);
	ft_bzero(p, mem);
	return (p);
}
