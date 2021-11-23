/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:21:12 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:21:13 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	sub_str[len + 1];

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	ft_strlcpy(sub_str, s + start, len + 1);
	return (ft_strdup(sub_str));
}
