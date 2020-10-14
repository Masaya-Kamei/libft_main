#include <stdio.h>
#include "libft.h"

int main(void)
{
	t_list *lst = ft_lstnew("lst");
	t_list *new = ft_lstnew("new");
	ft_lstadd_front(&lst, new);

	printf("ft_lstadd_front(&lst, new)\n");
	printf("	lst->content		:%s\n", lst->content);
	printf("	lst->next->content	:%s\n", lst->next->content);

	free(lst->next);
	free(lst);
	return (0);
}
