typedef struct    s_list
{
  void            *content;
  size_t          content_size;
  struct s_list   *next;
}                 t_list;

void ft_lstadd(t_list **head, t_list *new) //adds node to front of list
{
  if (head == NULL || new == NULL)
    return ;
  //1. make next of new node as head
  new->next = *head;
  //2. move the head to point at the new node
  *head = new;
}
