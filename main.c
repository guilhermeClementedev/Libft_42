#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdint.h>
#include <ctype.h>
int main()
{
	/*// ft_isalpha.c (verifica se é alpha)

	printf("Minhas função\n");
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha(0));
	printf("Originais\n");
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('z'));
	printf("%d\n", isalpha('Z'));
	printf("%d\n", isalpha(0));*/


	/*// ft_isdigit.c (verifica se é um digito)
	printf("Minhas função\n");
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(0));
	printf("Originais\n");
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('9'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit(0));*/

	/*// ft_tolower.c (retorna a caracter minuscula)
	printf("Minhas funções\n");
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('1'));
	printf("%c\n", ft_tolower('5'));
	printf("Originais\n");
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('z'));
	printf("%c\n", tolower('Z'));
	printf("%c\n", tolower('1'));
	printf("%c\n", tolower('5'));*/


	/*// ft_isalnum.c (verifica se é alpha e num)
	printf("Minhas funções\n");
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum(0));
	printf("Originais\n");
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('A'));
	printf("%d\n", isalnum('z'));
	printf("%d\n", isalnum('Z'));
	printf("%d\n", isalnum('0'));
	printf("%d\n", isalnum('9'));
	printf("%d\n", isalnum(0));*/


	/*// ft_isascii.c (verifica se está na tabela ascii)
	char *c = "ça"; // uma caracter fora da tabela ascii usa mais de um bit eentão printa 2 saidas
	int	i = 0;
	while (c[i])
	{
		printf ("ori-%d\n", isascii(c[i]));
		printf ("my-%d\n", ft_isascii(c[i]));
		i++;
	}
	printf ("ori-%d\n", isascii(127));
	printf ("my-%d\n", ft_isascii(127));
	*/

	/*// ft_isprint.c (verifica se é printavel)
	int c = '8';
	printf("o %d\n", isprint(c));
	printf("m %d\n", ft_isprint(c));
	printf("o %d\n", isprint(-2));
	printf("m %d\n", ft_isprint(-2));
	printf("o %d\n", isprint('a'));
	printf("m %d\n", ft_isprint('a'));*/



	/*// ft_toupper.c (retorna a caracter maiúsculo)
	printf("Minhas funções\n");
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper('5'));
	printf("Originais\n");
	printf("%c\n", toupper('A'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('z'));
	printf("%c\n", toupper('Z'));
	printf("%c\n", toupper('1'));
	printf("%c\n", toupper('5'));*/


	/*// ft_strlen.c (retorna o len de uma string)
	printf ("Minhas funções\n");
	printf ("%lu\n", ft_strlen(""));
	printf ("%lu\n", ft_strlen("oi"));
	printf ("%lu\n", ft_strlen("vasco"));
	printf ("%lu\n", ft_strlen("da"));
	printf ("%lu\n", ft_strlen("gama"));
	printf ("Originais\n");
	printf ("%lu\n", strlen(""));
	printf ("%lu\n", strlen("oi"));
	printf ("%lu\n", strlen("vasco"));
	printf ("%lu\n", strlen("da"));
	printf ("%lu\n", strlen("gama"));*/


	/*// ft_strlcpy.c (retorna o len src e copia -lbsd)
	printf ("Minhas funções\n");
	char src[] = "VASCO";
	char dest[] = "ola mundo";
	char src1[] = "VASCO";
	char dest1[] = "ola mundo";
	//printf("size :%zu\n", ft_strlcpy(dest, src, 0));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, src, 1));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, src, 2));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, src, -1));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, src, 6));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, "", 42));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcpy(dest, "1", 0));
	//printf("string :%s\n", dest);
	printf("\nOriginais\n");
	//printf("size :%zu\n", strlcpy(dest1, src1, 0));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, src1, 1));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, src1, 2));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, src1, -1));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, src1, 6));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, "", 42));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcpy(dest1, "1", 0));
	//printf("string :%s\n", dest1);
	*/


	/*// ft_strlcat.c (retorna o size do dst + src(caso não consiga concatenar retorna) e concatena -lbsd)
	char src[] = "VASCO DA GAMA";
	char dest[30];
	ft_memset(dest, '\0', 30);
	char src1[] = "VASCO DA GAMA";
	char dest1[30];
	ft_memset(dest1, '\0', 30);
	printf("Minhas funções\n");
	//printf("size :%zu\n", ft_strlcat(dest, src, 0));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcat(dest, src, 1));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcat(dest, src, 3));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcat(dest, src, 6));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcat(dest, src, -1));
	//printf("string :%s\n", dest);
	//printf("size :%zu\n", ft_strlcat(dest, src, 17));
	//printf("string :%s\n", dest);
	//printf("Originais\n");
	//printf("size :%zu\n", strlcat(dest1, src1, 0));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcat(dest1, src1, 1));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcat(dest1, src1, 3));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcat(dest1, src1, 6));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcat(dest1, src1, -1));
	//printf("string :%s\n", dest1);
	//printf("size :%zu\n", strlcat(dest1, src1, 17));
	//printf("string :%s\n", dest1);*/


	/*// ft_strncmp.c (compara strings até n)
	printf ("Minhas funções\n");
	printf ("%d\n", ft_strncmp("t", "", 0));
	printf ("%d\n", ft_strncmp("1234", "12345", 6));
	printf ("%d\n", ft_strncmp("123", "12345", 3));
	printf ("%d\n", ft_strncmp("", "", 42));
	printf ("%d\n", ft_strncmp("VASCo", "VASCO", 6));
	printf ("Originais\n");
	printf ("%d\n", strncmp("t", "", 0));
	printf ("%d\n", strncmp("1234", "12345", 6));
	printf ("%d\n", strncmp("123", "12345", 3));
	printf ("%d\n", strncmp("", "", 42));
	printf ("%d\n", strncmp("VASCo", "VASCO", 6));*/


	/*// ft_atoi.c (recebe uma string e retorna um inteiro)
	printf ("Minhas funções\n");
	printf ("%d\n", ft_atoi("1"));
	printf ("%d\n", ft_atoi("a1"));
	printf ("%d\n", ft_atoi("--1"));
	printf ("%d\n", ft_atoi("+1"));
	printf ("%d\n", ft_atoi("0"));
	printf ("%d\n", ft_atoi("-24"));
	printf ("%d\n", ft_atoi("10"));
	printf ("Originais\n");
	printf ("%d\n", atoi("1"));
	printf ("%d\n", atoi("a1"));
	printf ("%d\n", atoi("--1"));
	printf ("%d\n", atoi("+1"));
	printf ("%d\n", atoi("0"));
	printf ("%d\n", atoi("-24"));
	printf ("%d\n", atoi("10"));*/


	/*// ft_strchr.c (procura a ocorrencia de uma chr)
	char s[] = "VASCO DA GAMA";
	printf ("Minhas funções\n");
	printf ("%s\n", ft_strchr(s, 'V'));
	printf ("%s\n", ft_strchr(s, 'D'));
	printf ("%s\n", ft_strchr(s, 'v'));
	printf ("%s\n", ft_strchr(s, 0));
	printf ("%s\n", ft_strchr(s, 'V' + 256));
	printf ("Originais\n");
	printf ("%s\n", strchr(s, 'V'));
	printf ("%s\n", strchr(s, 'D'));
	printf ("%s\n", strchr(s, 'v'));
	printf ("%s\n", strchr(s, 0));
	printf ("%s\n", strchr(s, 'V' + 256));*/


	/*// ft_strrchr.c (procura a ocorrencia de uma chr)
	char s[] = "VASCOCDA GAMA";
	printf ("Minhas funções\n");
	printf ("%s\n", ft_strrchr(s, 'A'));
	printf ("%s\n", ft_strrchr(s, 'C'));
	printf ("%s\n", ft_strrchr(s, 'v'));
	printf ("%s\n", ft_strrchr(s, 0));
	printf ("Originais\n");
	printf ("%s\n", strrchr(s, 'A'));
	printf ("%s\n", strrchr(s, 'C'));
	printf ("%s\n", strrchr(s, 'v'));
	printf ("%s\n", strrchr(s, 0));*/


	/*// ft_strnstr.c (procura a ocorrencia de uma string até n)
	char str[30] = "aaabcabcd";
	char str2[10] = "aabc";
	printf ("Minhas funções\n");
	printf("%s\n", ft_strnstr(str, str2, 0));
	printf("%s\n", ft_strnstr(str, str2, 10));
	printf("%s\n", ft_strnstr(str, str2, 4));
	printf("%s\n", ft_strnstr(str, str2, 3));
	printf("%s\n", ft_strnstr(str, "abcd", 9));
	printf ("Originais\n");
	printf("%s\n", strnstr(str, str2, 0));
	printf("%s\n", strnstr(str, str2, 10));
	printf("%s\n", strnstr(str, str2, 4));
	printf("%s\n", strnstr(str, str2, 3));
	printf("%s\n", strnstr(str, "abcd", 9));*/


	/*// ft_memcpy.c (copia memoria de um arr para o outro)
	printf ("Minhas funções\n");
	char dest[30];
	ft_memset(dest, '\0', 30);
	//printf("%s\n", (char *)ft_memcpy(dest, "VASCO", 0));
	//printf("%s\n", (char *)ft_memcpy(dest, "VASCO", 6));
	printf ("Originais\n");
	//printf("%s\n", (char *)memcpy(dest, "VASCO", 0));
	//printf("%s\n", (char *)memcpy(dest, "VASCO", 6));*/


	/*// ft_memmove.c (copia memoria e trata overlap)
	printf ("Minhas funções\n");
	char dest[] = "AABBCC";
	//printf("%s\n", (char *)ft_memmove(dest, dest, 0));
	//printf("%s\n", (char *)ft_memmove(dest + 3, dest, 4));
	printf ("Originais\n");
	//printf("%s\n", (char *)memmove(dest, dest, 0));
	//printf("%s\n", (char *)memmove(dest + 3, dest, 4)); */


	/*// ft_memset.c (seta os bits para dentro do arr)
	char arr[] = "bbbb";
	printf("Minhas funções\n");
	ft_memset(arr, 'a', 4);
	printf("%s\n", arr);
	printf ("Originais\n");
	ft_memset(arr, 'a', 4);
	printf("%s\n", arr);*/


	/*// ft_memchr.c (procura pelo mesmo tamanho de bits na memoria)
	printf("MEMCHR:\noriginal:%s\nnova:%s\n\n", (char *)memchr("Hello", 'e', 5), (char*)ft_memchr("Hello", 'e', 5));*/


	// ft_memcmp.c (compara as memorias e retorna a diferença)
	/*printf("MEMCMP:\noriginal:%d\nnova:%d\n\n", memcmp("cmp", "cml", 3), ft_memcmp("cmp", "cml", 3));*/


	/*// ft_bzero.c (seta tudo para null)
	char str1[6] = "Hello";
	bzero(str1, 4);
	char str2[6] = "Hello";
	ft_bzero(str2, 4);
	printf("BZERO:\noriginal:%s\nnova:%s\n\n", str1, str2);*/


	// ft_calloc.c (malloc que verifica erros e seta para null);
	/*char *arr;
	arr = (char *)ft_calloc(6, sizeof(char));
	int i = 0;
	//ft_strlcpy(arr, "vasco", 3);
	while (i < 6)
	{
		if (arr[i] == '\0')
			printf("NULL\n");
		else
			printf("%d-%c\n", i, arr[i]);
		i++;
	}*/

	/*// ft_strdup.c (malloc um espaço e copia)
	printf("STRDUP:\noriginal:%s\nnova:%s\n\n", strdup("strdup is right!"), ft_strdup("strdup is right!"));*/


	/*// ft_substr.c (cria uma nova string a partir da posição start até o len)
	printf("SUBSTR:\noriginal:%s\nnova:%s\n\n", ft_substr("Hello, World!", 0, 5), ft_substr("Hello, World!", 0, 5));*/


	// ft_strjoin.c (recebe 2 strings calloc um novo espaço com o tamnho das duas e coloca la dentro)
	/*printf("STRJOIN:\noriginal:%s\n\n", ft_strjoin("strjoin ", "is right!"));*/


	// ft_strtrim.c (recebe 1 string e verifica no começo e final a caracter malloc um novo espaço copia e devolvve)
	/*printf("STRTRIM:\nMY:%s\n\n", ft_strtrim("  Hello World  ", " "));*/


	/*// ft_split.c (separa as strings a partir de seu separador)
	char	**ptrs;
	char *try = " vasco da gama";
	int words = 4;
	ptrs = ft_split(try, ' ');
	int i = 0;
	while (i < words)
	{
		if (ptrs[i] == NULL)
			printf("frase %d :(NULL)\n", i);
		else
			printf("frase %d :%s\n", i, ptrs[i]);
		i++;
	}*/


	/*// ft_itoa.c (recebe um numero e retorna uma string)
	printf("%s\n",ft_itoa(-0));
	printf("%s\n",ft_itoa(10));
	printf("%s\n",ft_itoa(-10));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(2147483647));*/

	// ft_strmapi.c (aplica a função recebida em cada caracter da string recebida e malloca na nova string)

	// ft_striteri.c (chama a função passando posição por posição da string)


	// ft_putchar_fd.c (putchar no index fd)
	//ft_putchar_fd('a', 1);

	// ft_putstr_fd.c (putstr no index fd);
	//ft_putstr_fd("I LOVE VASCO\n",1);

	// ft_putendl_fd.c
	//ft_putendl_fd("I LOVE VASCO",1);

	// ft_putnbr_fd.c
	/*ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(-0, 1);
	ft_putnbr_fd(10, 1);
	ft_putnbr_fd(-10, 1);*/

	return (0);
}
