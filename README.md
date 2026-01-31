# Libft

_This project has been created as part of the 42 curriculum by <***Varandri***>_.

## What is Libft ?
Libft is a project that involves creating a static library in C.  
It reimplements standard libc functions and provides additional utility functions for:

- String manipulation  
- Memory management  
- Linked list operations  

## Instructions

#### Build the static library
To build the library , use the following command
```bash
make 
```

#### Clean the object files in the directory
To remove the object files in the directory (*.o) without deleting the final library , use the following command
```bash
make clean
```

#### Clean the generated files in the directory
To clean the directory from all the generated files , use the following command
```bash
make fclean
```

#### Rebuild
To rebuild the library , use the following command
```bash
make re
```

#### Using the library
To use the static library in your project, include it during compilation. Example:
```bash
cc -Wall -Wextra -Werror program.c libft.a
```

## Resources
In order to finish this project , the following platform was used to read about some functions and their behavior and test them as well:
+ [GeeksforGeek](https://www.geeksforgeeks.org/c/c-programming-language/)
+ [w3school](https://www.w3schools.com/)
+ [OneCompiler](https://onecompiler.com/c) (for testing functions)
+ C manual (**man** Command)
+ [MakeFIle Tutorial](https://makefiletutorial.com/) (to learn how to make a makefile)
+ [MarkDown Guide](https://www.markdownguide.org/getting-started/) (to learn how to use md to make the README)
+ [Youtube](https://www.youtube.com/) (for tutorials)

## Examples

#### Header file
Bellow is an example of the header file .
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
/* ... other function prototypes ... */
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
```

#### Function implementation
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
#### Example of use the the library
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