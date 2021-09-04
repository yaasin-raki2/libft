#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strstr(const char *haystack, const char *needle);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_strnequ(char const *s1, char const *s2, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strncat(char *dest, char *src, size_t n);
char *ft_strncpy(char *dest, char *src, size_t n);
char *ft_strjoin(char const *s1, char const *s2);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strmap(char const *s, char (*f)(char));
int ft_strcmp(const char *s1, const char *s2);
int ft_strequ(char const *s1, char const *s2);
void ft_striter(char *s, void (*f)(char *));
void ft_putstr_fd(char const *str, int fd);
void ft_putendl_fd(char const *s, int fd);
char **ft_strsplit(char const *s, char c);
void *ft_memset(void *s, int c, size_t n);
char *ft_strcat(char *dest, char *src);
char *ft_strcpy(char *dest, char *src);
char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
void ft_putchar_fd(char c, int fd);
size_t ft_strlen(char const *str);
void ft_bzero(void *s, size_t n);
void ft_putnbr_fd(int n, int fd);
void ft_putstr(char const *str);
char *ft_strtrim(char const *s);
void ft_putendl(char const *s);
void *ft_memalloc(size_t size);
char *ft_strnew(size_t size);
char *ft_strdup(char *src);
void ft_memdel(void **ap);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_putchar(char c);
int ft_atoi(char *str);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void ft_putnbr(int n);
char *ft_itoa(int n);

typedef struct s_list
{
  void *content;
  size_t content_size;
  struct s_list *next;
} t_list;

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list *ft_lstnew(void const *content, size_t content_size);
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void ft_lstadd(t_list **alst, t_list *new);
void ft_print_list_int(t_list *head);

#endif