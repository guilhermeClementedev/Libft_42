/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:15:26 by guclemen          #+#    #+#             */
/*   Updated: 2024/09/30 10:15:27 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1 == s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdcpy(char *dst, const char *src, int rem)
{
	unsigned int	i;
	unsigned int	t;

	t = ft_strlen (src) - rem;
	i = 0;
	while (i < t)
	{
		dst[i] = src[i];
		i++;
	}
	dst[t] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	front;
	unsigned int	i;
	unsigned int	back;
	char			*ptr;

	back = 0;
	i = ft_strlen(s1);
	front = 0;
	while (s1[front])
	{
		if (!ft_strcmp (s1[front], set))
			break ;
		front++;
	}
	while (--i != 0)
	{
		if (!ft_strcmp (s1[i], set))
			break ;
		back++;
	}
	ptr = (char *)ft_calloc ((ft_strlen(s1) + 1) - front - back, 1);
	if (ptr != NULL)
		return (ft_strdcpy(ptr, s1 + front, back), ptr);
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *arr = " a  I LOVE VASCO!  a ";
	char *sep = "aaaa! ";
	printf("%s\n", ft_strtrim(arr, sep));
}
*/
