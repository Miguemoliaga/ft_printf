/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:22:27 by mmartine          #+#    #+#             */
/*   Updated: 2022/07/14 20:22:19 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printchar(int n);
int	ft_printstr(char *str);
int	ft_printnum(int number);
int	ft_printhexa_caps(unsigned int num);
int	ft_printhexa_minus(unsigned int num);
int	ft_printpointer(void *pointer);
int	ft_printf(char const *format, ...);
int	ft_printunsigned(unsigned int number);

#endif
