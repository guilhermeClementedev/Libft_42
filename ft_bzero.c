/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:46:58 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/26 10:47:08 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>

int main()
{
	char arr[5];
	bzero(arr, 5);

	printf("%s\n", arr);

	int ptr[5];
	bzero(ptr,sizeof(int) * 5);
	ft_bzero(ptr,sizeof(int) * 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d- %d\n",i ,ptr[i]);
		i++;
	}
}
*/
