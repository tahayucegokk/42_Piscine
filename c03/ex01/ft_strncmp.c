/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:12:43 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/06 19:10:32 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	t;

	t = 0;
	while ((s1[t] != '\0' || s2[t] != '\0') && t < n)
	{
		if (s1[t] > s2[t])
			return (1);
		else if (s1[t] < s2[t])
			return (-1);
		t++;
	}
	return (0);
}
