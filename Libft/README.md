*This project has been created as part of the 42 curriculum by <your_login>.*

# Libft

## Description

Libft is the first project of the 42 cursus. The idea is to recode some functions from the C standard library (the ones we use all the time like `strlen`, `memcpy` or `atoi`) and put them in our own library, `libft.a`. After that we can reuse it in all the next projects.

The project has 3 parts:

- **Part 1**: functions from libc, rewritten with the `ft_` prefix
- **Part 2**: extra functions that aren't in libc (`ft_split`, `ft_itoa`, `ft_substr`...)
- **Bonus**: functions to work with linked lists

It was a good way to really understand how strings, memory and pointers work in C, and to get used to the Norm and to writing a Makefile.

## Instructions

Compile the library with:

```bash
make
```

For the bonus functions:

```bash
make bonus
```

Other rules:

```bash
make clean    # removes the .o files
make fclean   # removes the .o files and libft.a
make re       # fclean + make
```

To use it in your own code, include the header and link the library when you compile:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o my_program
```

## Functions

**Part 1 (libc)**

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

**Part 2 (additional)**

- `ft_substr`: gets a substring from a string
- `ft_strjoin`: joins two strings in a new one
- `ft_strtrim`: removes a set of characters at the start and end of a string
- `ft_split`: cuts a string into an array of strings with a delimiter
- `ft_itoa`: turns an int into a string
- `ft_strmapi`: applies a function to each char and returns the new string
- `ft_striteri`: applies a function to each char (with its index)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write stuff on a file descriptor

**Bonus (linked lists)**

The list uses this struct:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

- The `man` pages (`man 3 strlen`, `man 3 memmove`...)
- Talking and doing peer evaluations with other 42 students
- Internet
