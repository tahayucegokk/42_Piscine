/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 04:18:10 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/07 00:37:32 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	u;
	unsigned int	t;

	u = 0;
	t = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	while (t < nb && src[t] != '\0')
	{
		dest[u] = src[t];
		t++;
		u++;
	}
	dest[u] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main ()

{
	char a[] = "blabla";
	char b[] = "khkhkhkh";
	printf("%s", ft_strncat(a, b, 48));
}
*/
