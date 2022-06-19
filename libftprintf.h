/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:51:57 by mochan            #+#    #+#             */
/*   Updated: 2021/10/18 12:04:47 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int			dectohex_ptr(unsigned long n, int base, char *base_str);
int			dectohex(unsigned int n, int base, char *base_str);
void		*ft_calloc(size_t count, size_t size);
int			ft_flag(const char *fmt, va_list ap);
char		*ft_itoa(int n);
int			ft_printf(const char *fmt, ...);
int			ft_putchar_fd(char c, int fd);
char		*ft_uitoa(unsigned int n);
int			function(void *p, char flag);
int			numconversion(va_list ap, char flag);
int			print_ptr_addr(va_list ap);
int			wint(int n, int base, char *base_str);
int			wstr(va_list ap);
int			wuint(unsigned int n, int base, char *base_str);
void		*zeromem(void *str, size_t n);

#endif
