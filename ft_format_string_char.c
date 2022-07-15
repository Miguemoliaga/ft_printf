/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_string_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:21:49 by mmartine          #+#    #+#             */
/*   Updated: 2022/07/14 20:22:37 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int n)
{
	return (write(1, &n, 1));
}

int	ft_printstr(char *str)
{
	int	n;

	n = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (n);
}
