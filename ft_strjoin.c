#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*arr;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	printf("%ld\n", size);
	arr = (char*) ft_calloc (size, sizeof(char));
	if (arr != NULL)
	{
		ft_strlcat(arr, s1, ft_strlen(s1));
		ft_strlcat(arr, s2, size);
		return (arr);
	}
	return(NULL);
}

#include <stdio.h>
int main()
{
	char *arr = "i have tried so hard";
	char *arr2 = " and got so far";
	char *ptr = ft_strjoin(arr, arr2);
	//int i = 0;
	printf("%s", ptr);
	/*
	while (i < 35)
	{
		if (ptr[i] == '\0')
			printf ("NULL\n");
		else
			printf("%d-%c\n", i , ptr[i]);
		i++;
	}*/
}
