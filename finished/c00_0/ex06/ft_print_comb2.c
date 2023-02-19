/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:14:49 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/14 13:45:54 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_from_pair_to_99(char first_pair_a, char first_pair_b)
{
	char	second_pair_a;
	char	second_pair_b;

	second_pair_a = first_pair_a;
	second_pair_b = first_pair_b + 1;
	while (second_pair_a <= '9')
	{
		while (second_pair_b <= '9')
		{
			write(1, &first_pair_a, 1);
			write(1, &first_pair_b, 1);
			write(1, " ", 1);
			write(1, &second_pair_a, 1);
			write(1, &second_pair_b, 1);
			if (!(first_pair_a == '9' && first_pair_b == '8'))
				write(1, ", ", 2);
			second_pair_b++;
		}
		second_pair_a++;
		second_pair_b = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_print_from_pair_to_99(a, b);
			b++;
		}
		a++;
		b = '0';
	}
}
