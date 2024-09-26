/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:55:23 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/23 14:55:28 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char *c = "ç";
	int	i = 0;
	while (c[i])
	{
		printf ("%d\n", isascii(c[i]));
		printf ("%d\n", ft_isascii(c[i]));
		i++;
	}
    return (0);
}
*/
