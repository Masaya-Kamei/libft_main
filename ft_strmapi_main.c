#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int , char));

char add_int_char(unsigned int i, char c)
{
	return (char)(i + c);
}

int main(void)
{
	char *str1 = ft_strmapi("abc", add_int_char);
	printf("ft_strmapi(\"abc\", add_int_char)	:%s\n", str1);

	free(str1);
	return (0);
}

