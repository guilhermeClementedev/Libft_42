/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:05:19 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/23 15:05:24 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 32;
    int d = '0';

    printf("%d\n", isalnum(c));
    printf("%d\n", isalnum(d));
    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(d));

    return 0;
}*/
