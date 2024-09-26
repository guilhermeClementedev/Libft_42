/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:13:08 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 16:13:10 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	return_size;
	size_t	i;

	i = 0;
	return_size = ft_strlen(src);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (return_size);
}
/* -lbsd
#include <stdio.h>
#include <bsd/string.h>
#include <unistd.h>

int main()
{
  char arr[50] = {};
  char src[] = {"I Love CRVG"};
  printf ("%ld\n", strlcpy(arr, src, 12));
  //printf ("%zu\n", ft_strlcpy (arr, src, 12));
  int i = 0;
  while (arr[i])
  {
    write(1,&arr[i],1);
    i++;
  }
  write(1,"\n",1);
}
*/
