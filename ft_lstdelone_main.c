#include <stdio.h>
#include "libft.h"

void	lst_content_free(void *a)
{
	free(a);
}

int	main(void)
{
	char *str1 = ft_strdup("ab");
	t_list *lst1 = ft_lstnew(str1);

	char *str2 = ft_strdup("cd");
	t_list *lst2 = ft_lstnew(str2);

	lst1->next = lst2;
	ft_lstdelone(lst1, lst_content_free);

	free(str2);
	free(lst2);
	// free(str1);
	// free(lst);

	while (1){}
	return (0);
}
