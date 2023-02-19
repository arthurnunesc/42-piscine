/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:00:23 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/12 16:05:04 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_check_if_positive(int first_number, int second_number)
{
	if (first_number > 0 && second_number > 0)
	{
		return (0);
	}
	else
	{
		write(1, "Please enter valid numbers\n", 28);
		return (1);
	}
}

void	ft_print_line(char start, char mid, char end, int length)
{
	int	current_length;

	current_length = length;
	while (current_length > 0)
	{
		if (current_length == length)
		{
			ft_putchar(start);
		}
		else if (current_length == 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		current_length--;
	}
}

void	rush(int x, int y)
{
	int	current_line;

	if (ft_check_if_positive(x, y) == 0)
	{
		current_line = y;
		while (current_line > 0)
		{
			if (current_line == y)
			{
				ft_print_line('/', '*', '\\', x);
			}
			else if (current_line == 1)
			{
				ft_print_line('\\', '*', '/', x);
			}
			else
			{
				ft_print_line('*', ' ', '*', x);
			}
			write(1, "\n", 1);
			current_line--;
		}
	}
}
