/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:34:53 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 20:08:47 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_hex(int number)
{
	int	remainder;
	int	division;

	division = (number / 16) + 48;
	remainder = number % 16;
	write(1, "\\", 1);
	write(1, &division, 1);
	if (remainder > 9)
	{
		remainder += 87;
		write(1, &remainder, 1);
	}
	else
	{
		remainder += 48;
		write(1, &remainder, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] < 32)
			ft_int_to_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
