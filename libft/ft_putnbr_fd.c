/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojang <hojang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:12 by hojang            #+#    #+#             */
/*   Updated: 2021/11/23 18:20:13 by hojang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n == INT_MIN)
		return (ft_putstr_fd("2147483648", fd));
	n = (n < 0) ? -n : n;
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd("0123456789"[n % 10], fd);
}
