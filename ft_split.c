#include "libft.h"
#include <stdio.h>

int	ft_words (const char *s, int c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i] == '\0')
		count++;
	return (count);
}

int	ft_sizeword (const char *src, int c)
{
	unsigned int	i;

	i = 0;
	while (src[i] != c && src[i])
		i++;
	return (i);
}

void	ft_allocword (char **ptrs, const char *s, int c)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	size;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		size = ft_sizeword(&s[i], c);
		printf("size %d	\n", size);
		printf("i = %d	\n", i);
		ptrs[k] = (char *)ft_calloc (size + 1, 1);
		ft_strlcpy(ptrs[k], &s[i], size + 1);
		k++;
		while (s[i] != c && s[i])
			i++;
	}
	if (!s[i])
	{
		ptrs[k] = (char *)ft_calloc (1, 1);
		ptrs[k][0] =  '\0';
	}
}

char	**ft_split(char const *s, char c)
{
	char			**ptrs;
	unsigned int	words;

	words = ft_words (s, c);
	ptrs = (char **)ft_calloc(words + 1,sizeof(char *));
	ft_allocword (ptrs,s, c);

	return(ptrs);
}
/*
int main()
{
	char	**ptrs;
	char *try = " vasco";
	int words = ft_words (try, ' ');
	ptrs = ft_split(try, ' ');
	int i = 0;
	while (i < words)
	{
		printf("frase %d :%s\n", i, ptrs[i]);
		i++;
	}
	//printf("frase %d : %s\n", i, ptrs[i]);
}
*/
