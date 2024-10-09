/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:23:00 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 16:23:01 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	return_size;
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	return_size = (d + s);
	if (size == 0)
		return (s);
	if (size <= d)
		return (size + s);
	while (src[i] && i < size - d - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (return_size);
}
/* -lbsd
#include <stdio.h>
#include <bsd/string.h>
#include <unistd.h>

int main()
{
	char arr[50] = {"The biggest of the world: "};
	char src[] = {"Vasco of gama"};
	printf ("%ld\n", strlcat(arr, src, 50));
	//printf ("%ld\n", ft_strlcat (arr, src, 50));
	int i = 0;
	while (arr[i])
	{
		write(1,&arr[i],1);
		i++;
	}
	write(1,"\n",1);
}
*/
