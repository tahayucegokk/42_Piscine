/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:24:22 by myucegok          #+#    #+#             */
/*   Updated: 2022/07/29 13:11:32 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
//int main() 
//{
////int tab[6] = {-1, 6, 3,-5, 2, 5};
//int size = 6;
//ft_sort_int_tab(tab, size);
//printf("%d, %d, %d, %d, %d, %d", 
//tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
//return (0);
//}
