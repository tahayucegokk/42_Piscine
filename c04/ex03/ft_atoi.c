/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:18:41 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/07 04:14:33 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	u;
	int	m;
	int	t;

	u = 0;
	m = 1;
	t = 0;
	while ((str[u] >= 9 && str[u] <= 13) || str[u] == 32)
	{
		u++;
	}
	while (str[u] == '-' || str[u] == '+')
	{
		if (str[u] == '-')
			m *= -1;
			u++;
	}
	while (str[u] >= '0' && str[u] <= '9')
	{
		t = (str[u] - '0') + (t * 10);
		u++;
	}
	return (t * m);
}
/*
#include <stdio.h>
int main()
{
  printf("%d", ft_atoi("  ----++-123afdgaf21312"));
}
*/
