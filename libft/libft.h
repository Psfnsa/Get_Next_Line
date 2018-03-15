/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabanciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:54:29 by mabanciu          #+#    #+#             */
/*   Updated: 2018/02/14 15:13:25 by mabanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t len);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *b, int c, size_t len);

#endif
