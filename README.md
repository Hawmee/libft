_This project has been created as part of the 42 curriculum by ***Varandri***_.

# Description
Libft is a project that involves creating a static library in C.  
It reimplements standard libc functions and provides additional utility functions for:

- String manipulation  
- Memory management  
- Linked list operations  

# Instructions

## Build the static library
To build the library , use the following command
```bash
make 
```

## Clean the object files in the directory
To remove the object files in the directory (*.o) without deleting the final library , use the following command
```bash
make clean
```

## Clean the generated files in the directory
To clean the directory from all the generated files , use the following command
```bash
make fclean
```

## Rebuild
To rebuild the library , use the following command
```bash
make re
```

# Resources
In order to finish this project , the following platform was used to read about some functions and their behavior and test them as well:
+ [GeeksforGeek](https://www.geeksforgeeks.org/c/c-programming-language/)
+ [w3school](https://www.w3schools.com/)
+ [OneCompiler](https://onecompiler.com/c) (for testing functions)
+ The Manual (**man** Command)
+ [MakeFIle Tutorial](https://makefiletutorial.com/) (to learn how to make a makefile)
+ [MarkDown Guide](https://www.markdownguide.org/getting-started/) (to learn how to use md to make the README)
+ [Youtube](https://www.youtube.com/) (for tutorials)
+ [ChatGPT](https://chatgpt.com/) (for learning how to make README)

# Details
Libft is a library that contains functions that are mainly used to help when encountering string manipulations , linked list manipulations , characters manipulations and for arrays manipulations.

## Functions inside libft
Here are the functions inside libft .
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:20:25 by varandri          #+#    #+#             */
/*   Updated: 2026/01/27 13:36:47 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
```

## Examples
### Function implementation
Bellow is an example of the implementation of one of the functions in the library.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:55:18 by varandri          #+#    #+#             */
/*   Updated: 2026/01/30 11:09:00 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	if (!s)
		return (NULL);
	i = 0;
	dup = (char *)malloc((ft_strlen(s)+1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = ((char *)s)[i];
		i ++;
	}
	dup[i] = '\0';
	return (dup);
}
```
### Example of the library usage
Here is an example of the main useage of one of the functions from the library .
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 03:27:48 by varandri          #+#    #+#             */
/*   Updated: 2026/01/31 18:08:27 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	len;
	char	*str;

	str = ft_strdup("Hello World!!");
	if (!str)
		return (0);
	len = ft_strlen(str);
	printf("The sentence: '%s' has %zu characters.", str, len);
	return (0);
}
```

### Example of compilation using libft

To use the static library in a program , include it during compilation. Example:

```c
cc -Wall -Wextra -Werror program.c libft.a
```