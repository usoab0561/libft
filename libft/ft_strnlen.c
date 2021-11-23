/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:54 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:54 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char	*p = ft_memchr(s, '\0', maxlen);

	return ((p) ? p - s : maxlen);
}
