/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:52:14 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/14 11:26:09 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		result;

	va_start(ap, str);
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			result += ft_formats(ap, str[i + 1]);
			i++;
		}
		else
			result += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (result);
}

// int	main(void)
// {
// 	ft_printf("%%", 33);
// 	return (0);
// }
