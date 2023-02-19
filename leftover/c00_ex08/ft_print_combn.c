/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:11:37 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/14 16:41:26 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
    	ft_putchar('-');
        nb = -nb;
  	}
    if (nb > 9)
    {
    	ft_putnbr(nb / 10);
    	nb = nb % 10;
    }
	ft_putchar(nb + 48);
}

void	ft_print_comb(void)
{
	char	first_number;
	char	second_number;
	char	third_number;

	first_number = '0';
	while (first_number <= '9')
	{
		second_number = first_number + 1;
		while (second_number <= '9')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write(1, &first_number, 1);
				write(1, &second_number, 1);
				write(1, &third_number, 1);
				if (!(first_number == '7'))
					write(1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}

void	ft_print_combn(int n)
{
	char	number;

	number = '0';
	if (n > 1 && n < 10)
	{
		while (number <= '9')
		{
			write(1, &number, 1);
			n--;
			ft_print_combn(n);
			number++;
		}	
	}
	else if (n == 1)
	{
		while (number <= '9')
		{
			write(1, &number, 1);
			number++;
		}
	}
}
