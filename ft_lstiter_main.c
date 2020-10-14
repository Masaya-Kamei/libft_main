#include <stdio.h>
#include "libft.h"

void	to_upper(void *s)
{
	((unsigned char *)s)[0] += 'A' - 'a';
	((unsigned char *)s)[1] += 'A' - 'a';
}

int main(void)
{
	char *str1 = ft_strdup("ab");
	t_list *lst = ft_lstnew(str1);

	char *str2 = ft_strdup("cd");
	lst->next = ft_lstnew(str2);

	char *str3 = ft_strdup("ef");
	lst->next->next = ft_lstnew(str3);

	ft_lstiter(lst, to_upper);
	printf("ft_lstiter(lst, to_upper)\n");
	printf("	lst->content			:%s\n", lst->content);
	printf("	lst->next->content		:%s\n", lst->next->content);
	printf("	lst->next->next->content	:%s\n", lst->next->next->content);

	free(str1); free(str2); free(str3);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
