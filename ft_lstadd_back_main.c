#include <stdio.h>
#include "libft.h"

int		main(void)
{
	t_list	*lst = ft_lstnew("ab");
	lst->next = ft_lstnew("cd");

	ft_lstadd_back(&lst, ft_lstnew("zz"));
	printf("lst->content			:%s\n", lst->content);
	printf("lst->next->content		:%s\n", lst->next->content);
	printf("lst->next->next->content	:%s\n", lst->next->next->content);
	printf("lst->next->next->next		:%p\n", lst->next->next->next);

	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
