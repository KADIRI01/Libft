*This project has been created as part of the 42 curriculum by wkadiri.*

# Libft

## Table of Contents

- [Description](#description)
- [Instructions](#instructions)
  - [Cloning](#cloning)
  - [Compilation](#compilation)
  - [Usage](#usage)
- [Library Overview](#library-overview)
  - [Part 1: Libc Functions](#part-1-libc-functions)
  - [Part 2: Additional Functions](#part-2-additional-functions)
  - [Part 3: Linked List Functions](#part-3-linked-list-functions)
- [Resources](#resources)

---

## Description

Libft is a project in which I developed my own static C library, reimplementing a selected set of functions from the standard C library (libc), commonly used in Unix-like systems, alongside additional utility functions for string manipulation, memory management, and linked list operations.

The main objective of this project is to understand how fundamental C library functions work internally, strengthen my understanding of memory management and pointers, and build a reusable collection of functions that can be used throughout the 42 curriculum.

The resulting library, `libft.a`, contains 43 functions divided into three main parts.

## Instructions


### Compilation

A Makefile is provided to automate the compilation and cleaning process.

The available commands are:

| Command | Description |
|---|---|
| `make` | Compiles the mandatory functions and generates `libft.a`. |
| `make all` | Builds the library. |
| `make clean` | Removes all object files (`.o`). |
| `make fclean` | Removes object files and the generated library (`libft.a`). |
| `make re` | Performs a complete recompilation. |

### Usage

To use the library in another C project, include its header:

```c
#include "libft.h"
```

Compile your program and link it against `libft.a`:

```bash
cc main.c -I. ./libft.a -o program
```

Then execute your program:

```bash
./program
```

## Library Overview

The library contains 43 functions organized into three parts.

### Part 1: Libc Functions

Reimplementation of selected standard C library functions.

| Category | Function | Description |
|---|---|---|
| Character classification | `ft_isalpha` | Checks whether a character is alphabetic. |
| Character classification | `ft_isdigit` | Checks whether a character is a decimal digit. |
| Character classification | `ft_isalnum` | Checks whether a character is alphanumeric. |
| Character classification | `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| Character classification | `ft_isprint` | Checks whether a character is printable. |
| Character conversion | `ft_toupper` | Converts a lowercase letter to uppercase. |
| Character conversion | `ft_tolower` | Converts an uppercase letter to lowercase. |
| String | `ft_strlen` | Returns the length of a string. |
| Memory | `ft_memset` | Fills a memory area with a specified byte. |
| Memory | `ft_bzero` | Sets a memory area to zero. |
| Memory | `ft_memcpy` | Copies bytes between non-overlapping memory areas. |
| Memory | `ft_memmove` | Copies bytes between memory areas, including overlapping ones. |
| Memory | `ft_memchr` | Searches for a byte in a memory area. |
| Memory | `ft_memcmp` | Compares two memory areas byte by byte. |
| String | `ft_strlcpy` | Copies a string with a specified destination size. |
| String | `ft_strlcat` | Concatenates strings with a specified destination size. |
| String | `ft_strchr` | Finds the first occurrence of a character in a string. |
| String | `ft_strrchr` | Finds the last occurrence of a character in a string. |
| String | `ft_strncmp` | Compares two strings up to a specified number of characters. |
| String | `ft_strnstr` | Searches for a substring within a limited portion of a string. |
| Conversion | `ft_atoi` | Converts a string into an integer. |
| Memory allocation | `ft_calloc` | Allocates memory and initializes it to zero. |
| Memory allocation | `ft_strdup` | Creates a dynamically allocated copy of a string. |

### Part 2: Additional Functions

Additional utility functions extending the library's functionality.

| Category | Function | Description |
|---|---|---|
| String manipulation | `ft_substr` | Extracts a substring from a given string. |
| String manipulation | `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| String manipulation | `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| String manipulation | `ft_split` | Splits a string into an array of strings using a delimiter. |
| Conversion | `ft_itoa` | Converts an integer into a string. |
| String iteration | `ft_strmapi` | Applies a function to each character and creates a new string. |
| String iteration | `ft_striteri` | Applies a function to each character, allowing in-place modification. |
| File descriptor output | `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| File descriptor output | `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| File descriptor output | `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| File descriptor output | `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### Part 3: Linked List Functions

Implementation of a singly linked list using the `t_list` structure.

Each node contains a `content` pointer and a `next` pointer referencing the following node.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Returns the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Deletes a node and frees its content using a provided function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Resources

### References

The following resources helped me understand the concepts and implement the library:

- **The C Programming Language (2nd Edition)** — Brian W. Kernighan and Dennis M. Ritchie.
- **GNU C Library Documentation** — https://www.gnu.org/software/libc/manual/
- **42 Libft Subject** — Project specifications and function requirements.

### Personal Learning Guide

Throughout this project, I created a personal PDF reference guide to organize the concepts I studied, document the functions, and consolidate my understanding of C programming.

This guide served as a learning reference throughout my Libft journey. It is maintained separately from the project repository.

### AI Usage

AI tools were used as learning and documentation assistants throughout the project.

The tools I used include:

- **NotebookLM**
- **Prism**
- **DeepSeek**

They helped me explore C programming concepts, organize technical explanations, and develop my personal learning guide.

The implementation and understanding of the library remained the central focus of my learning process.