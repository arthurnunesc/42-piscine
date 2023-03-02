/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:57:22 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/02 18:09:32 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0')
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i == 1)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (ft_check_base(base) == 0)
	{
		base_size = 0;
		while (base[base_size])
			base_size++;
		if (nbr == -2147483648)
		{
			write(1, "-2", 2);
			nbr = 147483684;
		}
		else
		{
			if (nbr < 0)
			{
				ft_putchar('-');
				nbr = -nbr;
			}
			if (nbr > base_size - 1)
				ft_putnbr_base(nbr / base_size, base);
			nbr = nbr % base_size;
			ft_putchar(base[nbr]);
		}
	}
}
