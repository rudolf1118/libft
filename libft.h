//
// Created by Rudolf Harutyunyan on 23.01.24.
//

#ifndef LIBFT_H
#define LIBFT_H
# include <stdlib.h>
int ft_isalpha(int arg);
int ft_isdigit(int arg);
int ft_ialnum(int arg);
int ft_isascii(int arg);
int ft_isprint(int arg);
size_t ft_strlen(const char *arg);
void *ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *str, size_t num);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
#endif //LIBFT_LIBFT_H
