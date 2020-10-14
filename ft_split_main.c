#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int main(void)
{
	char **strs1 = ft_split("a1bb1ccc1111dddd1", '1');
	printf("ft_split(\"a1bb1ccc1111dddd1\", \'1\')\n");
	for (int i = 0; i < 4; i++)
		printf("	strs1[%d]	:%s\n", i, strs1[i]);

	char **strs2 = ft_split("\0aa", '\0');
	printf("ft_split(\"\\0aa\", \'\\0\')\n");
	printf("	strs2		:%p\n", strs2);
	printf("	strs2[0]	:%s\n", strs2[0]);

	char **strs3 = ft_split("aaa", 'a');
	printf("ft_split(\"aaa\", \'a\')\n");
	printf("	strs3		:%p\n", strs3);
	printf("	strs3[0]	:%s\n", strs3[0]);

	for (int i = 0; i < 4; i++)
		free(strs1[i]);
	free(strs2[0]);
	free(strs3[0]);
	free(strs1);
	free(strs2);
	free(strs3);
	return (0);
}
