/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:27 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:27 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const size_t	len = ft_strlen(s1);
	char			*dst;

	if (!(dst = malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
