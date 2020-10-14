#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
	printf("[case 1]\n");
	const char src1[] = "abcdefgh";
	char dst1[] = "0123456789";
	char dst2[] = "0123456789";
	void *rt1;
	void *rt2;

	rt1 = memcpy(dst1, src1, 5);
	printf("	memcpy		:%s,	return	:%s\n", dst1, rt1);

	rt2 = ft_memcpy(dst2, src1, 5);
	printf("	ft_memcpy	:%s,	return	:%s\n", dst2, rt2);

	///////////////////////////////////////////////////////////
	printf("[case 2]\n");
	const char src2[] = "ab\0cdefgh";
	char dst3[] = "0123456789";
	char dst4[] = "0123456789";
	void *rt3;
	void *rt4;

	rt3 = memcpy(dst3, src2, 5);
	printf("	memcpy		:");
	for (int i = 0; i < 10; i++)
		printf("%c", dst3[i]);
	printf(",	return	:");
	for (int i = 0; i < 10; i++)
		printf("%c", ((char *)rt3)[i]);
	printf("\n");

	rt4 = ft_memcpy(dst4, src2, 5);
	printf("	ft_memcpy	:");
	for (int i = 0; i < 10; i++)
		printf("%c", dst4[i]);
	printf(",	return	:");
	for (int i = 0; i < 10; i++)
		printf("%c", ((char *)rt4)[i]);
	printf("\n");

	///////////////////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	memcpy		:%s\n", memcpy(NULL, NULL, 3));
	printf("	ft_memcpy	:%s\n", ft_memcpy(NULL, NULL, 3));

	return (0);
}
