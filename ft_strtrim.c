#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (*s1 == s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdcpy(char *dst, const char *src, const char *rem)
{
	unsigned int	i;
	unsigned int	t;

	t = 0;
	i = 0;
	while (src[i])
	{
		if (!ft_strcmp(&src[i], rem))
		{
			dst[t] = src[i];
			t++;
		}
		i++;
	}
	dst[t] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	count;
	unsigned int	i;
	char			*ptr;

	i = 0;
	count = 0;
	while (s1[i])
	{
		count += ft_strcmp (&s1[i], set);
		i++;
	}
	ptr = (char *)ft_calloc ((i + 1) - count, 1);
	if (ptr != NULL)
	{
		ft_strdcpy(ptr, s1, set);
		return (ptr);
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *arr = "   I LOVE VASCO   ";
	char *sep = " ";
	printf("%s\n", ft_strtrim(arr, sep));
}
*/
