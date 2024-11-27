# Libft - A 42 School Library of Common C Functions

A library of common C functions used in the Core Curriculum of the 42 school.

## Overview

### Char Checks and Conversions
- **`int ft_isalpha(int c)`**: Checks if `c` is a letter.
- **`int ft_isdigit(int c)`**: Checks if `c` is a digit.
- **`int ft_isalnum(int c)`**: Checks if `c` is an alphanumeric character.
- **`int ft_isascii(int c)`**: Checks if `c` is on the ASCII chart.
- **`int ft_isprint(int c)`**: Checks if `c` is a printable character.
- **`int ft_toupper(int c)`**: Converts `c` to uppercase.
- **`int ft_tolower(int c)`**: Converts `c` to lowercase.

### Memory Functions
- **`void ft_memset(void *s, int c, size_t n)`**: Sets a chunk of memory to `c`. Memory address begins with `s` and ends with `s + n`.
- **`void ft_bzero(void *s, size_t n)`**: Sets a chunk of memory to `0`. Memory address begins with `s` and ends with `s + n`.
- **`void ft_memcpy(void *dest, const void *src, size_t n)`**: Copies `n` bytes from `src` to `dest`.
- **`void ft_memmove(void *dest, const void *src, size_t n)`**: Moves `n` bytes from `src` to `dest`.
- **`void* ft_memchr(const void *s, int c, size_t n)`**: Returns a pointer to the first occurrence of char `c` in `s`.
- **`int ft_memcmp(const void *s1, const void *s2, size_t n)`**: Compares `s1` and `s2`, cast as char pointers.
- **`void* ft_calloc(size_t nmemb, size_t size)`**: Allocates memory.

### String Functions
- **`int ft_atoi(const char *nptr)`**: Converts from string to int.
- **`int ft_atoi_base(const char *nptr, const char *base)`**: Converts from string in base to int (not part of official project).
- **`char* ft_itoa(int n)`**: Converts from int to string.
- **`char* ft_strchr(const char *s, int c)`**: Returns a pointer to the first occurrence of `c` in `s`.
- **`char* ft_strrchr(const char *s, int c)`**: Returns a pointer to the last occurrence of `c` in `s`.
- **`int ft_strncmp(const char *s1, const char *s2, size_t n)`**: Compares `n` chars of `s1` and `s2`.
- **`int ft_strcmp(const char *s1, const char *s2)`**: Compares `s1` and `s2` (not part of official project).
- **`size_t ft_strlen(const char *s)`**: Returns the length of the string.
- **`size_t ft_strlcpy(char *dst, const char *src, size_t size)`**: Copies `size` chars of `src` to `dst`.
- **`size_t ft_strlcat(char *dst, const char *src, size_t size)`**: Concatenates `src` to `dst`.
- **`char* ft_strdup(const char *s)`**: Duplicates a string.
- **`char* ft_substr(char const *s, unsigned int start, size_t len)`**: Copies and returns the substring of `s` that begins at `start` and ends at `start + len`.
- **`char* ft_strjoin(char const *s1, char const *s2)`**: Joins `s1` to `s2`.
- **`char* ft_strtrim(char const *s1, char const *set)`**: Trims the chars in `set` from `s1`.
- **`char** ft_split(char const *s, char c)`**: Splits string `s` into words separated by `c`.
- **`char* ft_strmapi(char const *s, char (*f)(unsigned int, char))`**: Maps `f` onto `s`.
- **`void ft_striteri(char *s, void (*f)(unsigned int, char*))`**: Applies `f` to every char in `s`.

### String Finding Functions
- **`int ft_match(const char *big, const char *little, size_t len)`**: Finds `little` in `big`.
- **`char* ft_strnstr(const char *big, const char *little, size_t len)`**: Finds `little` in `big`.
- **`char* ft_grep(char **tab, char *word)`**: Similar to the shell command `grep`, used in `minishell`.

### Output Functions (File Descriptor)
- **`void ft_putchar_fd(char c, int fd)`**: Prints `c` to `fd`.
- **`void ft_putstr_fd(char *s, int fd)`**: Prints `s` to `fd`.
- **`void ft_putendl_fd(char *s, int fd)`**: Prints `s` with newline to `fd`.
- **`void ft_putnbr_fd(int n, int fd)`**: Prints decimal int to `fd`.

### List Functions (Bonus)
- **`t_list *ft_lstnew(void *content)`**: Creates a new node.
- **`void ft_lstadd_front(t_list **lst, t_list *new)`**: Adds a node to the front of the list.
- **`int ft_lstsize(t_list *lst)`**: Returns the size of the list.
- **`t_list *ft_lstlast(t_list *lst)`**: Returns the last node of the list.
- **`void ft_lstadd_back(t_list **lst, t_list *new)`**: Adds a node to the back of the list.
- **`void ft_lstdelone(t_list *lst, void (*del)(void *))`**: Deletes one node.
- **`void ft_lstclear(t_list **lst, void (*del)(void *))`**: Clears the list.
- **`void ft_lstiter(t_list *lst, void (*f)(void *))`**: Applies `f` to every node in `lst`.
- **`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`**: Maps `f` onto `lst`.

### Get Next Line (Added from Project 42_get_next_line)
- **`char* get_next_line(int fd)`**: Gets the next line from a file.
- **`int ft_lastchar(char *line)`**: Returns the last char in `line`.
- **`int ft_linelen(char *s)`**: Returns the length of `s` until the first `\0`.
- **`void* free_strs(char **buffer, char *line)`**: Frees `buffer` and `line`.
- **`void update_buffer(char *buffer)`**: Removes the first line from `buffer`.

### Ft_printf (Added from Project 42_printf)
- **`int ft_printf(const char *format, ...)`**: Simplified version of `printf`.

### Additional Utility Functions
- **`void ft_freetab(void **tab)`**: Frees a double array.
- **`int ft_tablen(void **tab)`**: Returns the length of a double array.
- **`void ft_copytab(void **dest, void **src)`**: Copies `src` to `dest`.
- **`int ft_min(int a, int b)`**: Returns the minimum of `a` and `b`.
- **`int ft_max(int a, int b)`**: Returns the maximum of `a` and `b`.


