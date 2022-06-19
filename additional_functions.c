/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:58:29 by mochan            #+#    #+#             */
/*   Updated: 2021/10/17 19:42:23 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

void	*zeromem(void *str, size_t n)
{
	int				i;
	unsigned char	*temp;

	temp = ((unsigned char *)str);
	i = 0;
	while (i < (int)n)
		temp[i++] = '\0';
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (0);
	zeromem(p, size * count);
	return (p);
}
