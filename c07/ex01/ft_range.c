/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:18:55 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/11 00:20:32 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int        main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    i = 0;
    int    size;

    min = 5;
    max = 10;
    size = max - min;
    tab = ft_range(min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}
*/
