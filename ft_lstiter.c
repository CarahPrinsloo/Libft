typedef struct    s_list
{
  void            *content;
  size_t          content_size;
  struct s_list   *next;
}                 t_list;

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
  while (lst != NULL)
  {
    f(lst);
    lst = lst->next;
  }
}
