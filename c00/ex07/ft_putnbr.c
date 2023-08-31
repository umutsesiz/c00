/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umsesiz <umsesiz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:57:26 by umsesiz           #+#    #+#             */
/*   Updated: 2023/08/31 20:51:42 by umsesiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;
	int	b;

	if(nb < 0)
		write(1, &"-", 1);
	a = (nb / 10);
	b = (nb % 10);

	write(1, &a, 1);
	write(1, &b, 1);
}

int main()
{
	ft_putnbr(86);
	return 0;
}
