/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:33:50 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 11:33:52 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int main()
{
  printf("%ld\n", ft_strlen("test"));
  printf("%ld\n", strlen("test"));
  printf("%ld\n", ft_strlen("Just trying to survive"));
  printf("%ld\n", strlen("Just trying to survive"));
}
*/
