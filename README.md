_This project has been created as part of the 42 curriculum by Varandri_.

# Description

Libft is a foundational project at 42 that involves creating a custom C library containing reimplementations of standard C library functions, along with additional utility functions. This library serves as a personal toolkit that will be used throughout the 42 curriculum for future C projects.

The project is divided into three main parts:
- **Part 1**: Reimplementation of standard libc functions (string manipulation, memory management, character checks, etc.)
- **Part 2**: Additional utility functions not present in libc or with different implementations
- **Part 3**: Linked list manipulation functions
 

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
+ [claudeAI](https://claude.ai/) (for helping to make README)

# Details
Libft.c is a library that contains functions that are mainly used to help when encountering string manipulations , linked list manipulations , characters manipulations and for arrays manipulations.

## Functions inside libft
Here are the functions inside libft .
### Part 1 - Libc Functions

**Character checks:**
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable

**String functions:**
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit
- `ft_strlcat` - Concatenate strings with size limit
- `ft_strchr` - Locate first occurrence of character
- `ft_strrchr` - Locate last occurrence of character
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

**Memory functions:**
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlaps)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero memory

**Conversion functions:**
- `ft_atoi` - Convert string to integer
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

### Part 2 - Additional Functions

- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings into new string
- `ft_strtrim` - Trim characters from beginning and end
- `ft_split` - Split string into array by delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character with index
- `ft_striteri` - Iterate string and apply function
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output integer to file descriptor

### Part 3 - Linked List Functions

- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at beginning of list
- `ft_lstadd_back` - Add node at end of list
- `ft_lstsize` - Count nodes in list
- `ft_lstlast` - Get last node of list
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete and free entire list
- `ft_lstiter` - Iterate list and apply function
- `ft_lstmap` - Create new list by applying function to each node

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
### Example of usage of the library
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