#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	i = ft_strlen(&s[start - 1]);
	if (i < len)
		arr = (char *)ft_calloc(len, sizeof(char));
	else
		arr = (char *)ft_calloc(i, sizeof(char));
	if (arr != NULL)
	{
		ft_strlcpy(arr, &s[start - 1], len);
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
