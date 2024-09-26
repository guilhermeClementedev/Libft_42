/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:11:51 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 11:30:41 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c != 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
  int c = '8';
  printf("%d\n", ft_isprint(c));
  printf("%d\n", isprint(c));
  printf("%d\n", ft_isprint(10));
  printf("%d\n", isprint(10));
  printf("%d\n", ft_isprint('a'));
  printf("%d\n", isprint('a'));

}*/
