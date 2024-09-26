/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:53:39 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 11:53:47 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int main ()
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
}
*/
