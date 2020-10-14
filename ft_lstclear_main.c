#include <stdio.h>
#include "libft.h"


void	lst_content_free(void *a)
{
	free(a);
}

int main(void)
{
	char *str1 = ft_strdup("ab");
	t_list *lst1 = ft_lstnew(str1);
	char *str2 = ft_strdup("cd");
	t_list *lst2 = ft_lstnew(str2);
	char *str3 = ft_strdup("ef");
	t_list *lst3 = ft_lstnew(str3);

	lst1->next = lst2;
	lst2->next = lst3;
	ft_lstclear(&lst1, lst_content_free);
	// ft_lstclear(&lst1, NULL);
	// printf("lst1	:%p\n", lst1);

	while (1){}
	return (0);
}
