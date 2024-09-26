/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:49:56 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/24 14:50:27 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && i + k < len)
		{
			k++;
			if (little[k] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/* -lbsd
#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char test[] ={"Im just TRYINg to survive"};
	char test_litle[] = {"TRYINg"};
	printf("%s\n", ft_strnstr(test, test_litle, 13));
	printf("%s\n", strnstr(test, test_litle, 13));
}
*/
