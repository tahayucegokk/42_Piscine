/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:28:58 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/09 17:29:23 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && nb > 0)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		n++;
	}
	return (0);
}
