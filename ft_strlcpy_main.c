#include <stdio.h>
#include <string.h>

// 返り値は、src1の長さ
// ヌル文字含めて５文字
// sizeがdstの長さを超えるとエラー
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int main(void)
{
	printf("[case 1]\n");
	char src1[] = "abcdef";
	char dst1[] = "12345678";
	char dst2[] = "12345678";
	size_t rt1;
	size_t rt2;

	rt1 = strlcpy(dst1, src1, 5);
	printf("	strlcpy		:%s,		return	:%zu\n", dst1, rt1);

	rt2 = ft_strlcpy(dst2, src1, 5);
	printf("	ft_strlcpy	:%s,		return	:%zu\n", dst2, rt2);

	//////////////////////////////////////////////////////////
	printf("[case 2]\n");
	char src2[] = "abcdef";
	char dst3[] = "12345678";
	char dst4[] = "12345678";
	size_t rt3;
	size_t rt4;

	rt3 = strlcpy(dst3, src2, 9);
	printf("	strlcpy		:%s,	return	:%zu\n", dst3, rt3);

	rt4 = ft_strlcpy(dst4, src2, 9);
	printf("	ft_strlcpy	:%s,	return	:%zu\n", dst4, rt4);

	return (0);
}
