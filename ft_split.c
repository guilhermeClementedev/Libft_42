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
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i] == '\0')
		count++;
	return (count);
}

void	ft_word (char **ptrs, const char *s, int c)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while(*s)
	{
		if (*s == c)
		{
				i++;
			ptrs[k] = (char *) ft_calloc(i + 1, 1);
			printf("CADA BGLH %d\n", i);
			i = 0;
			k++;
		}
		s++;
		i++;
	}
	if (!*s)
		ptrs[k] = (char *) ft_calloc(i + 1, 1);
	printf("CADA BGLH %d\n", i);
}

char	**ft_split(char const *s, char c)
{
	char			**ptrs;
	unsigned int	words;
	unsigned int	i;
	unsigned int	k;
	unsigned int	d;

	k = 0;
	i = 0;
	words = ft_words (s, c);
	ptrs = (char **)ft_calloc(words,sizeof(char *));
	ft_word (ptrs,s, c);
	while (s[i])
	{
		d = 0;
		while (s[i] != c && s[i])
		{
			ptrs[k][d] = s[i];
			d++;
			i++;
		}
		ptrs[k][d] = '\0';
		k++;
		while(s[i] == c && s[i])
			i++;
	}
	ptrs[k][d] = '\0';
	return(ptrs);
}

int main()
{
	char	**ptrs;
	//int words = ft_words ("vasco oi", ' ');
	ptrs = ft_split("vasco oi", ' ');
	int i = 0;
	/*while (i < words)
	{
		printf("frase %d : %s\n", i, ptrs[i]);
		i++;
	}*/
	printf("frase %d : %s\n", i, ptrs[i]);
}
