/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:15:01 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/30 10:15:02 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(char *dst, const char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;
	unsigned int	k;

	k = ft_strlen (s);
	i = 0;
	if (!s)
		return (NULL);
	while (s[start + i] && i < len && k > start)
		i++;
	arr = (char *)ft_calloc(i + 1, sizeof(char));
	if (i == 0)
		return (arr);
	if (arr != NULL)
	{
		ft_copy(arr, s + start, len);
		return (arr);
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *arr = "I tried so hard";
	char *ptr = ft_substr(arr, 3, 12);
	int i = 0;
	while (i < 16)
	{
		if (ptr[i] == '\0')
			printf ("NULL\n");
		else
			printf("%d-%c\n", i , ptr[i]);
		i++;
	}
}
*/
