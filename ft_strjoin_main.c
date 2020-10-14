#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char *join1 = ft_strjoin("abc", "def");
	printf("ft_strjoin(\"abc\", \"def\")	:%s\n", join1);

	char *join2 = ft_strjoin("abc", NULL);
	printf("ft_strjoin(\"abc\", NULL)		:%s\n", join2);

	char *join3 = ft_strjoin(NULL, "abc");
	printf("ft_strjoin(NULL, \"abc\")		:%s\n", join3);

	char *join4 = ft_strjoin(NULL, NULL);
	printf("ft_strjoin(NULL, NULL)		:%s\n", join4);

	free(join1);
	free(join2);
	free(join3);
	free(join4);
	return (0);
}
