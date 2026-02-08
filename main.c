#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // make sure your t_list and ft_lst* functions are here

// Function to map: doubles an int stored in void*
void *double_int(void *content)
{
    int *val = malloc(sizeof(int));
    if (!val)
        return NULL;
    *val = (*(int *)content) * 2;
    return val;
}

// Delete function
void del_int(void *content)
{
    free(content);
}

// Helper: print list of ints
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Create original list: 1 -> 2 -> 3
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *a = 1; *b = 2; *c = 3;

    t_list *list = ft_lstnew(a);
    ft_lstadd_back(&list, ft_lstnew(b));
    ft_lstadd_back(&list, ft_lstnew(c));

    printf("Original list: ");
    print_list(list);

    // Map list
    t_list *mapped = ft_lstmap(list, double_int, del_int);

    printf("Mapped list: ");
    print_list(mapped);

    // Clean up
    ft_lstclear(&list, del_int);
    ft_lstclear(&mapped, del_int);

    return 0;
}
