/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:51:58 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 13:52:01 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)&s[i]);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("%s\n", strchr("I love CRVG", 'I'));
	printf("%s\n", ft_strchr("I love CRVG", 'I'));
}
*/
