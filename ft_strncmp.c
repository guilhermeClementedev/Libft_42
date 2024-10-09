/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:33:42 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 14:33:44 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i + 1 < n)
		i++;
	return ((int) s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main()
{
  char test[] ={"c"};
  char test2[] = {"deed"};
  printf("%d\n", ft_strncmp(test,test2, 0));
  printf("%d\n", strncmp(test,test2, 0));
}
*/
