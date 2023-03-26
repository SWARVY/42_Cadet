/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:58:52 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/26 23:15:36 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *s);

#endif