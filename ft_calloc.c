#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*return_ptr;

	//if (nmemb == 0 || size == 0)
	//	return (NULL);
	return_ptr = malloc (nmemb * size);
	if (return_ptr == NULL)
		return (NULL);
	ft_bzero(return_ptr, nmemb * size);
	return (return_ptr);
}
/*
#include <stdio.h>

int main()
{
	char *arr;
	arr = (char *)ft_calloc(6, sizeof(char));
	int i = 0;
	ft_strlcpy(arr, "vasco", 3);
	while (i < 10)
	{
		if (arr[i] == '\0')
			printf("NULL\n");
		else
			printf("%d-%c\n", i, arr[i]);
		i++;
	}
}
*/
