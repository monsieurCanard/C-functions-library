/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:53:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/21 11:53:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <math.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void *ft_calloc(size_t nb, size_t size);
void *ft_memset(void *dest, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *pt1, const void *pt2, size_t size);

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

size_t ft_strlen(const char *str);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t len);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char **ft_split(char const *s, char c);
char *ft_strdup(const char *src);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strnstr(const char *s1, const char *s2, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
void ft_striteri(char *s, void (*f)(unsigned int, char *));

int ft_atoi(const char *str);
char *ft_itoa(int n);

void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);

int ft_lstsize(t_list *lst);
void ft_lstadd_front(t_list **alst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void ft_lstadd_back(t_list **alst, t_list *new);
t_list *ft_lstnew(void *content);

typedef struct s_sstack
{
	int *data;
	int base;
	int size;
} t_sstack;

typedef struct s_dnode
{
	void *data;
	struct s_dnode *next;
} t_dnode;

typedef struct s_dstack
{
	t_dnode *top;
	size_t size;
} t_dstack;

void s_clear_stk(t_sstack *stack);
int s_init_stk(t_sstack *stack, size_t size);
int s_isempty_stk(t_sstack *stack);
int s_isfull_stk(t_sstack *stack);
size_t s_len_stk(t_sstack *stack);
int s_pop_stk(t_sstack *stack);
void s_push_stk(t_sstack *stack, int value);
void s_rolldown_stk(t_sstack *stk);
void s_rollup_stk(t_sstack *stk);
void s_swap_stk(t_sstack *stk);

void d_clear_stk(t_dstack *stack, void (*del)(void *));
void d_drop_stk(t_dstack *stack, void (*del)(void *));
void d_drop_stk(t_dstack *stack, void (*del)(void *));
t_dstack *d_init_stk(void);
int d_isempty_stk(t_dstack *stack);
void *d_pop_stk(t_dstack *stack);
int d_push_stk(t_dstack *stack, void *data);
void d_swap_stk(t_dstack *stack);

typedef struct s_vector3
{
	float x;
	float y;
	float z;
} t_vector3;

typedef struct s_vector2
{
	float x;
	float y;
} t_vector2;

/////////////////////////////////////////
//////////// VECTOR3 FUNCTIONS //////////
/////////////////////////////////////////

/**
 * @brief Add two vector3
 *
 * @param a vector3 a
 * @param b	vector3 b
 *
 * @return t_vector3
 */
t_vector3 add_vector3(t_vector3 a, t_vector3 b);

/**
 * @brief Substract two vector3
 *
 * @param a vector3 a
 * @param b	vector3 b
 *
 * @return t_vector3
 */
t_vector3 sub_vector3(t_vector3 a, t_vector3 b);

/**
 * @brief Dot product of two vector3
 *
 * @param a vector3 a
 * @param b	vector3 b
 *
 * @return result of dot product
 */
float dot_vector3(t_vector3 a, t_vector3 b);

/**
 * @brief Cross product of two vector3
 *
 * @param a vector3 a
 * @param b	vector3 b
 *
 * @return t_vector3
 */
t_vector3 cross_vector3(t_vector3 a, t_vector3 b);

/**
 * @brief Normalize a vector3 adjust the lenght of the vector to 1
 * 	and keep the direction
 *
 * @param a vector3 a
 *
 * @return normalized vector3
 */
t_vector3 normalize_vector3(t_vector3 a);

/**
 * @brief Get the magnitude of a vector3
 *
 * @param a vector3 a
 *
 * @return magnitude of vector3
 */
float magnitude_vector3(t_vector3 a);

/**
 * @brief Create a vector3 object
 *
 * @param x x coordinate
 * @param y y coordinate
 * @param z z coordinate
 *
 * @return t_vector3
 */
t_vector3 vector3(float x, float y, float z);

/////////////////////////////////////////
//////////// VECTOR2 FUNCTIONS //////////
/////////////////////////////////////////

/**
 * @brief Add two vector2
 *
 * @param a vector2 a
 * @param b	vector2 b
 *
 * @return t_vector2
 */
t_vector2 add_vector2(t_vector2 a, t_vector2 b);

/**
 * @brief Substract two vector2
 *
 * @param a vector2 a
 * @param b	vector2 b
 *
 * @return t_vector2
 */
t_vector2 sub_vector2(t_vector2 a, t_vector2 b);

/**
 * @brief Dot product of two vector2
 *
 * @param a vector2 a
 * @param b	vector2 b
 *
 * @return result of dot product
 */
float dot_vector2(t_vector2 a, t_vector2 b);

/**
 * @brief Cross product of two vector2
 *
 * @param a vector2 a
 * @param b	vector2 b
 *
 * @return
 * @details cross product of two vector2
 */
float cross_vector2(t_vector2 a, t_vector2 b);

/**
 * @brief Normalize a vector2 adjust the lenght of the vector to 1
 * 	and keep the direction
 *
 * @param a vector2 a
 *
 * @return normalized vector2
 */
t_vector2 normalize_vector2(t_vector2 a);

/**
 * @brief Get the magnitude of a vector2
 *
 * @param a vector2 a
 *
 * @return magnitude of vector2
 */
float magnitude_vector2(t_vector2 a);

/**
 * @brief Create a vector2 object
 *
 * @param x x coordinate
 * @param y y coordinate
 *
 * @return t_vector2
 */
t_vector2 vector2(float x, float y);

#endif
