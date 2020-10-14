#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src2, int c, size_t n);

int main(void)
{
	printf("[case 1]\n");
	const char src1[] = "abcdefgh";
	char dst1[] = "0123456789";
	char dst2[] = "0123456789";
	void *rt1;
	void *rt2;

	rt1 = memccpy(dst1 + 2, src1, 'z', 5);
	printf("	memccpy:	%s,	return	:%s\n", dst1, rt1);

	rt2 = ft_memccpy(dst2 + 2, src1, 'z', 5);
	printf("	ft_memccpy:	%s,	return	:%s\n", dst2, rt2);


	///////////////////////////////////////////////////////
	printf("[case 2]\n");
	const char src2[] = "abcdefgh";
	char dst3[] = "0123456789";
	char dst4[] = "0123456789";
	void *rt3;
	void *rt4;

	rt3 = memccpy(dst3 + 2, src2, 'c', 8);
	printf("	memccpy:	%s,	return	:%s\n", dst3, rt3);

	rt4 = ft_memccpy(dst4 + 2, src2, 'c', 8);
	printf("	ft_memccpy:	%s,	return	:%s\n", dst4, rt4);

	return (0);
}
