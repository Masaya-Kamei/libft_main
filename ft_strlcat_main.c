#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	printf("[case 1]\n");
	char src1[] = "12345678";
	char dst1[20] = "abcdefghij";
	char dst2[20] = "abcdefghij";
	size_t rt1;
	size_t rt2;

	rt1 = strlcat(dst1, src1, 20);
	printf("	strlcat		:%s,	return	:%zu\n", dst1, rt1);

	rt2 = ft_strlcat(dst2, src1, 20);
	printf("	ft_strlcat	:%s,	return	:%zu\n", dst2, rt2);

	//////////////////////////////////////////////////////////
	printf("[case 2]\n");
	char src2[] = "12345678";
	char dst3[20] = "abcdefghij";
	char dst4[20] = "abcdefghij";
	size_t rt3;
	size_t rt4;

	rt3 = strlcat(dst3, src2, 15);
	printf("	strlcat		:%s,	return	:%zu\n", dst3, rt3);

	rt4 = ft_strlcat(dst4, src2, 15);
	printf("	ft_strlcat	:%s,	return	:%zu\n", dst4, rt4);

	///////////////////////////////////////////////////////////
	printf("[case 3]\n");
	char src3[] = "12345678";
	char dst5[20] = "abcdefghij";
	char dst6[20] = "abcdefghij";
	size_t rt5;
	size_t rt6;

	rt5 = strlcat(dst5, src3, 1);
	printf("	strlcat		:%s,		return	:%zu\n", dst5, rt5);

	rt6 = ft_strlcat(dst6, src3, 1);
	printf("	ft_strlcat	:%s,		return	:%zu\n", dst6, rt6);

	return (0);
}
