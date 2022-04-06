/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 12:48:44 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 18:33:12 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// For extensive information regarding the stated functions see manual. //

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define OCTAL "01234567"
# define DECIMAL "0123456789"
# define BINARY "01"

//
//
// ------------------------------------------------------------------ //
// ----------------------Character Utilities------------------------- //
// ------------------------------------------------------------------ //
//
//

// /**
//  * Checks whether a given character is any whitespace character.
//  * @param c The character to test.
//  * @returns Whether c is a whitespace character (1) or not (0).
//  */
int		ft_isspace(char c);

/**
 * Checks whether a given char is a valid alphabetical character.
 * @param c The character to test.
 * @returns Whether c is a valid alphabetical character (1) or not (0).
 */
int		ft_isalpha(int c);

/**
 * Checks whether a given char is a valid digit.
 * @param c The character to test.
 * @returns Whether c is a digit character (1) or not (0).
 */
int		ft_isdigit(int c);

/**
 * Checks whether a given character is a valid alphanumeric character
 * (= digit or letter).
 * @param c The character to test.
 * @returns Whether c is an alphanumeric character (1) or not (0).
 */
int		ft_isalnum(int c);

/**
 * Checks whether a given char is a valid ASCII character.
 * @param c The character to test.
 * @returns Whether c is a valid ASCII character (1) or not (0).
 */
int		ft_isascii(int c);

/**
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character (1) or not (0).
 */
int		ft_isprint(int c);

//
//
// ------------------------------------------------------------------ //
// -------------------------Integer Utilities------------------------ //
// ------------------------------------------------------------------ //
//
//

/**
 * Checks the length of an integer.
 * @param num The integer.
 * @returns Integer length.
 */
int		ft_intlen(int num);

//
//
// ------------------------------------------------------------------ //
// ------------------------Converter Utilities----------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Converts the given alphabetical character to uppercase.
 * @param c The character to convert.
 * @returns The character in uppercase.
 */
int		ft_toupper(int c);

/**
 * Converts the given alphabetical character to lowercase.
 * @param c The character to convert.
 * @returns The character in lowercase.
 */
int		ft_tolower(int c);

/**
 * Converts a given string to an integer, any failure will return 0.
 * @param str The string to convert.
 * @returns The string converted to an int, or 0.
 */
int		ft_atoi(const char *str);

/**
 * Converts a given integer to a string, any failure will return Null.
 * @param num The int to convert.
 * @returns The int converted to a string, or Null.
 */
char	*ft_itoa(int num);

//
//
// ------------------------------------------------------------------ //
// -------------------------String Utilities------------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * The strcmp functions return an integer less than,equal to, or greater
 * than zero if s1 is found, respectively, to be less than, to match,
 * or be greater than s2.
 * @param str1 The first string.
 * @param str2 The second string.
 * @returns returns an integer indicating the result of the comparison.
 */
int		ft_strcmp(const char *str1, const char *str2);

/**
 * The strcpy() function copies the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed
 * to by dest. The strings may not overlap, and the destination
 * string dest must be large enough to receive the copy.
 * @param dst The destination string to copy TO.
 * @param src The source string to copy FROM.
 * @returns a pointer to the destination string dest.
 */
char	*ft_strcpy(char *dst, const char *src);

/**
 * Retrieves the length of a given string.
 * @param str The string.
 * @returns The size of the given string.
 */
size_t	ft_strlen(const char *str);

/**
 * Returns ptr to the first occurence of the given char. Starting from the FRONT.
 * @param str The string.
 * @param c The character to look for.
 * @returns Pointer to the first occurence of the given char.
 */
char	*ft_strchr(const char *str, int c);

/**
 * Returns ptr to the first occurence of the given char. Starting from the BACK.
 * @param str The string.
 * @param c The character to look for.
 * @returns Pointer to the first occurence of the given char.
 */
char	*ft_strrchr(const char *str, int c);

/**
 * Copy the string from src to dst, secure from buffer overflows
 * using the full size of the destination string as a size parameter.
 * @param dst The destination string to copy TO.
 * @param src The source string to copy FROM.
 * @param dstsize The size of dstsize.
 * @returns The total length of the string they TRIED TO CREATE.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * Concatonate the string from src to dst, secure from buffer overflows
 * using the full size of the destination string as a size parameter.
 * @param dst The destination string to copy TO.
 * @param src The source string to copy FROM.
 * @param dstsize The size of dest.
 * @returns The total length of the string they TRIED TO CREATE.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Searches for the first occurence of the needle string in haystack.
 * @param haystack The source string to search in.
 * @param needle The string we are searching for in haystack.
 * @param len Length of haystack.
 * @returns Ptr to the first occurence of needle in haystack, else null.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * Compares the two given strings up until num.
 * @param str1 The first string.
 * @param str2 The second string.
 * @param num Limiter, as in, compare up to num chars.
 * @returns the difference between str1 and str2 in integer value and
 * 0 if equal.
 */
int		ft_strncmp(const char *str1, const char *str2, size_t num);

/**
 * Duplicates a given string, with an allocation.
 * @param str The string to duplicate.
 * @returns ptr to the newly allocated duplicate string.
 */
char	*ft_strdup(const char *str);

/**
 * Allocates and returns a substring from the string ’str’.
 * @param str The string from which to create the substring.
 * @param start  The start index of the substring in the string ’s’
 * @param len The maximum length of the substring.
 * @returns The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *str, unsigned int start, size_t len);

/**
 * Allocates and returns a new string, which is the result of
 * the concatenation of ’str1’ and ’str2’.
 * @param str1 The prefix string.
 * @param str2 The suffix string.
 * @returns The string result of the concatenation of the two strings.
 */
char	*ft_strjoin(char const *str1, char const *str2);

/**
 * Allocates and returns a copy of ’str1’ with the characters specified in ’set’,
 * removed from the beginning and the end of the string.
 * @param str1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @returns The trimmed string. NULL("") if the allocation fails.
 */
char	*ft_strtrim(char const *str1, char const *set);

/**
 * Applies the function f to each character of the
 * string passed as argument, and passing its index as first argument.
 * Each character is passed by address to f to be modified if necessary.
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *str, void (*f)(unsigned int, char*));

/**
 * Applies the function ’f’ to each character of the
 * string ’str’ to create a new string resulting
 * from successive applications of ’f’.
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 * @returns The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));

/**
 * Allocates and returns an array of strings obtained by
 * splitting ’str’ using the character ’c’ as a delimiter.
 * The array ends with a NULL pointer.
 * @param str The string to be split.
 * @param c The char delimiter.
 * @returns A string array.
 */
char	**ft_split(char const *str, char c);

//
//
// ------------------------------------------------------------------ //
// ----------------------Input & Output Utilities-------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Prints out a given char.
 * @param c The character to write.
 */
void	ft_putchar(char c);

/**
 * Prints out a given char to a given file descriptor.
 * @param c The character to write.
 * @param fd The file descriptor.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * Prints out a given string to a given file descriptor.
 * @param str The string to write.
 * @param fd The file descriptor.
 */
void	ft_putstr_fd(char *str, int fd);

/**
 * Prints a given string.
 * @param str The string to write.
 */
void	ft_putstr(char *str);

/**
 * Prints out a given string to a given file descriptor with a newline.
 * @param str The string to write.
 * @param fd The file descriptor.
 */
void	ft_putendl_fd(char *str, int fd);

/**
 * Prints out a given number to a given file descriptor.
 * @param num The number to write.
 * @param fd The file descriptor.
 */
void	ft_putnbr_fd(int num, int fd);

/**
 * Prints a given number.
 * @param num The number to write.
 */
void	ft_putnbr(int num);

/**
 * Prints out a given number depending on the base.
 * @param num The number to write.
 * @param base The base.
 */
void	ft_putnbr_base(int num, char *base);

/**
 * Prints out a given number depending on a baseformat (header).
 * Note: use only for num => 0. Otherwise see putnbr/putnbr_base.
 * @param num The number to write.
 * @param baseformat The base defined in the header.
 */
void	ft_putnbr_baseformat(size_t num, const char *baseformat);

//
//
// ------------------------------------------------------------------ //
// ---------------------------Math Utilities------------------------- //
// ------------------------------------------------------------------ //
//
//

//
//
// ------------------------------------------------------------------ //
// -------------------------Memory Utilities------------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Sets all bytes in source to a specified value
 * @param src The source.
 * @param len Size of source.
 */
void	*ft_memset(void *src, int c, size_t len);

/**
 * Sets all bytes in source to Null.
 * @param str The source.
 * @param num Size of source, in bytes.
 */
void	ft_bzero(void *str, size_t num);

/**
 * Copies no more than n amount of bytes from src to dest.
 * @param dst The destination buffer to which the bytes are copied TO.
 * @param src The source buffer from which the bytes are copied FROM.
 * @param num   The size of source.
 * @returns Ptr to dest buffer.
 */
void	*ft_memcpy(void *dst, const void *src, size_t num);

/**
 * Moves/copies bytes from src to dst while avoiding overlapping memory.
 * It does so by checking wether to copy from front or back.
 * @see: https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c
 * @param dst The destination buffer to which the bytes are copied TO.
 * @param src The source buffer from which the bytes are copied FROM.
 * @param len The size of source.
 * @returns Ptr to dest buffer.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Searches & returns for the first occurence of a given byte in source.
 * @param src The source.
 * @param c The byte to search for (will be casted to unsigned char).
 * @param num Up to how many bytes can/should be read.
 * @returns Ptr to the first occurence in source.
 */
void	*ft_memchr(const void *src, int c, size_t num);

/**
 * Compares two memory regions against each other.
 * @param src1 Source.
 * @param src2 Target.
 * @param num Size of s1.
 * @returns The difference between the bytes. 0 if equal.
 */
int		ft_memcmp(const void *src1, const void *src2, size_t num);

/**
 * Allocates memory of num objects of size and initializes all bytes to zero.
 * @param count The count of objects to allocate for.
 * @param size The size (n) AND type (sizeof(char/int)) of
 * the memory that needs to be allocated.
 * @returns The allocated memory area.
 */
void	*ft_calloc(size_t count, size_t size);

//
//
// ------------------------------------------------------------------ //
// --------------------------List Utilities-------------------------- //
// ------------------------------------------------------------------ //
//
//

/**
 * Creates a structure for this linked list.
 * "->" = arrow operator: gives value held by var_name to structure.
 * (pointer_name)->(var_name)
 * @Var content: The data contained in the element. The void * allows to store
 * any kind of data.
 * @Var next: The next element’s address or NULL if it’s the last element.
 * So, next = iterator and null terminator.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * Allocates and returns a new element. The var ’content’ is initialized
 * with the value of the parameter ’content’. The var ’next’ is initialized
 * to NULL.
 * @param content The content to create the new element with.
 * @returns The new element.
 */
t_list	*ft_lstnew(void *content);

/**
 * Adds the element ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param The address of a pointer to the element to be added to the list.
 * @returns nothing.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Counts the number of elements in a list.
 * @param lst The beginning of the list.
 * @returns lstCount/lengts of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * Returns the last element of the list.
 * @param lst The beginning of the list.
 * @returns Last element of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * Adds the element ’new’ at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @returns nothing.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Takes as a parameter an element and frees the memory of the element’s
 * content using the function ’del’ given as a parameter and free the element.
 * The memory of ’next’ must not be freed.
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 * @returns nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * Deletes and frees the given element and every successor of that element,
 * using the function ’del’ and free(3). Free is used in ft_lstdelone.
 * Finally, the pointer to the list must be set to NULL.
 * @param lst The adress of a pointer to an element.
 * @param del adress of the function used to delete the content of the element.
 * @returns nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @returns nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element. Creates a new list resulting of the successive
 * applications of the function ’f’. The ’del’ function is used to
 * delete the content of an element if needed.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @param del The adress of the function used to delete the content of an
 * element if needed.
 * @returns The new list.  NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif