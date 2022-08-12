/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:09:27 by myucegok          #+#    #+#             */
/*   Updated: 2022/07/29 01:03:23 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
int a;
int b;

int div;
int mod;

a = 10;
b = 2;

ft_div_mod(a, b, &div, &mod);
printf("%d", div);
printf("%d", mod);
}
*/
