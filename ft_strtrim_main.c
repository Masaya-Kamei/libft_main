#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char *str1 = ft_strtrim(" \n\nHello \t", " \n\t");
	printf("ft_strtrim(\" \\n\\nHello \\t\", \" \\n\\t\")	:%s\n", str1);

	char *str2 = ft_strtrim(" \n \t", " \n\t");
	printf("ft_strtrim(\" \\n \\t\", \" \\n\\t\")		:%s\n", str2);

	char *str3 = ft_strtrim(" \na \t", " \n\t");
	printf("ft_strtrim(\" \\na \\t\", \" \\n\\t\")		:%s\n", str3);

	free(str1);
	free(str2);
	free(str3);
	return (0);
}
