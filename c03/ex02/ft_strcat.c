/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myucegok <myucegok@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 04:11:38 by myucegok          #+#    #+#             */
/*   Updated: 2022/08/05 04:16:40 by myucegok         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	u;
	unsigned int	t;

	u = 0;
	t = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	while (src[t] != '\0')
	{
		dest[u] = src[t];
		t++;
		u++;
	}
	dest[u] = '\0';
	return (dest);
}
