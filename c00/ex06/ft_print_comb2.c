/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:54:03 by myucegok          #+#    #+#             */
/*   Updated: 2022/07/25 20:19:28 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	sayi1;
	char	sayi2;

	sayi1 = 0;
	sayi2 = 0;
	while (sayi1 <= 99)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 99)
		{
			ft_putchar(sayi1 / 10 + '0');
			ft_putchar(sayi1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sayi2 / 10 + '0');
			ft_putchar(sayi2 % 10 + '0');
			sayi2++;
			if (sayi1 != 98)
				write(1, ", ", 2);
		}
		sayi1++;
	}
}
