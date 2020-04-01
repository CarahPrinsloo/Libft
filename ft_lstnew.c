#include <string.h>
#include <stdlib.h>

typedef struct    s_list
{
  void            *content;
  size_t          content_size;
  struct s_list   *next;
}                 t_list;

t_list *ft_lstnew(void const *content, size_t content_size)
{
  t_list *list;
  
  //1. allocate memory for list
  if (!(list = (t_list *)malloc(sizeof(*list))))
    return (NULL);
    
  if (content == NULL || content_size == NULL)
  {
    list->content = NULL;
    list->content_size = 0;
  }
  else
  {
    //2. put in data 
    if (!(list->content = malloc(content_size)))
      return (NULL);
    memcpy(list->content, content, content_size);
    list->content_size = content_size;
  }
  
  //3. make next NULL
  list->next = NULL;
  return (list);
}
