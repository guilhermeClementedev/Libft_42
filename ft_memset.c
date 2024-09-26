/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:47:48 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/26 10:47:51 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char arr[5];
	ft_memset(arr, 'a', 5);

	printf("%s\n", arr);

	int ptr[5];
	memset(ptr,254,sizeof(int) * 5);
	ft_memset(ptr,254,sizeof(int) * 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d- %d\n",i ,ptr[i]);
		i++;
	}
}*/
