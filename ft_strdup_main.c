#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

int main(void)
{
	char *str = "abcde";
	printf("str		:%s,		address: %p\n", str, str);

	char *rt1 = strdup(str);
	printf("strdup		:%s,		address: %p\n", rt1, rt1);

	char *rt2 = ft_strdup(str);
	printf("ft_strdup	:%s,		address: %p\n", rt2, rt2);

	free(rt1);
	free(rt2);

	return (0);
}
