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
void *ft_memset (void *ptr, int value, size_t num);
void ft_bzero(void *str, size_t num);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
#endif //LIBFT_LIBFT_H
