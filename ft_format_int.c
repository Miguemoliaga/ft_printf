/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:03:56 by mmartine          #+#    #+#             */
/*   Updated: 2022/07/14 20:22:33 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int number)
{
	unsigned int	n;
	int				ret;

	ret = 0;
	if (number < 0)
	{
		ret += write(1, "-", 1);
		number *= -1;
	}
	n = (unsigned int) number;
	if (n < 10)
		ret += ft_printchar(n + '0');
	else
	{
		ret += ft_printnum(n / 10);
		ret += ft_printnum(n % 10);
	}
	return (ret);
}
