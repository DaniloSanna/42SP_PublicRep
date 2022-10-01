/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 06:10:06 by djustino          #+#    #+#             */
/*   Updated: 2022/10/01 06:10:08 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *input);
int		ft_isalnum(int input);
int		ft_isalpha(int input);
int		ft_isascii(int input);
int		ft_isdigit(int input);
int		ft_isprint(int input);
int		ft_memcmp(const void *s1, const void *s2, size_t limit);
int		ft_strncmp(const char *s1, const char *s2, size_t limit);
int		ft_tolower(int input);
int		ft_toupper(int input);

char	*ft_itoa(int n);
char	**ft_split(char const *input, char searched);
char	*ft_strchr(const char *input, int searched);
char	*ft_strdup(const char *input);
char	*ft_strjoin(char const *array1, char const *array2);
char	*ft_strmapi(char const *input, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *origin, const char *searched, size_t limit);
char	*ft_strrchr(const char *input, int searched);
char	*ft_strtrim(char const *input, char const *removelist);
char	*ft_substr(char const *input, unsigned int start, size_t distance);

void	ft_striteri(char *input, void (*f)(unsigned int, char*));
void	ft_bzero(void *cleaned, size_t limit);
void	*ft_calloc(size_t mensizeone, size_t mensizetwo);
void	*ft_memchr(const void *input, int searched, size_t limit);
void	*ft_memcpy(void *destination, const void *origin, size_t n);
void	*ft_memmove(void *destination, const void *origin, size_t limit);
void	*ft_memset(void *startposition, int replacevalue, size_t endposition);
void	ft_putchar_fd(char input, int messagetype);
void	ft_putendl_fd(char *input, int messagetype);
void	ft_putnbr_fd(int input, int messagetype);
void	ft_putstr_fd(char *input, int messagetype);

size_t	ft_strlcat(char *destination, const char *source,
			size_t destinationstart);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *input);

#endif
