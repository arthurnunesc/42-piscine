/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:53:19 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/14 13:38:53 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
