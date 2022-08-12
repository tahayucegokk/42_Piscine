/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:10:10 by myucegok          #+#    #+#             */
/*   Updated: 2022/07/29 01:05:08 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 9;
	printf("%d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a, b);
	return (0);
}
*/
