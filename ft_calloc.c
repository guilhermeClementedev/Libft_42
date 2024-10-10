/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:15:46 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/30 10:15:48 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*return_ptr;
	size_t	total;

	total = nmemb * size;
	if (size > 0 && nmemb > 0 && total / size != nmemb)
		return (NULL);
	return_ptr = malloc (total);
	if (return_ptr == NULL)
		return (NULL);
	ft_bzero(return_ptr, total);
	return (return_ptr);
}
/*
#include <stdio.h>

int main()
{
	char *arr;
	arr = (char *)ft_calloc(6, sizeof(char));
	int i = 0;
	ft_strlcpy(arr, "vasco", 3);
	while (i < 10)
	{
		if (arr[i] == '\0')
			printf("NULL\n");
		else
			printf("%d-%c\n", i, arr[i]);
		i++;
	}
}
*/
