/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalazar <dsalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:17:46 by dsalazar          #+#    #+#             */
/*   Updated: 2023/02/26 16:58:37 by dbriseno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_printstr(char *str);
void	ft_printstr_sb(char *str);

void	ft_aux_get_text(int num, int size, t_table *s_dict, unsigned int d_num)
{
	unsigned int	u_num;

	if (d_num > 19)
	{
		d_num = (d_num / 10) * 10;
		ft_printstr(ft_search_struct(d_num, size, s_dict));
		if (num % 10 != 0)
			write(1, " ", 1);
		u_num = num % 10;
		if (u_num != 0)
			ft_printstr(ft_search_struct(u_num, size, s_dict));
	}
	else
	{
		u_num = num % 20;
		ft_printstr(ft_search_struct(u_num, size, s_dict));
	}
}

void	ft_get_text(unsigned int num, int zeroes, int size, t_table *s_dict)
{
	unsigned int	c_num;

	c_num = num / 100;
	if (c_num != 0)
	{
		zeroes++;
		ft_printstr(ft_search_struct(c_num, size, s_dict));
		ft_printstr_sb(ft_search_struct(100, size, s_dict));
		if (num % 100 != 0)
			write(1, " ", 1);
	}
	if ((num % 100) != 0)
	{
		ft_aux_get_text(num, size, s_dict, (num % 100));
	}
	else
		if (zeroes == 0)
			ft_printstr(ft_search_struct(0, size, s_dict));
}

int	ft_aux_splice_int(unsigned int units, int size, int nb, t_table *s_dict)
{
	ft_printstr_sb(ft_search_struct(units, size, s_dict));
	nb = nb % units;
	if (nb != 0)
		write(1, " ", 1);
	return (nb);
}

void	ft_splice_int(unsigned int nb, int size, t_table *s_dict)
{
	int	zeroes;

	zeroes = 0;
	if (nb >= 1000000000)
	{
		zeroes++;
		ft_get_text(nb / 1000000000, zeroes, size, s_dict);
		nb = ft_aux_splice_int(1000000000, size, nb, s_dict);
	}
	if (nb >= 1000000 && nb < 1000000000)
	{
		zeroes++;
		ft_get_text(nb / 1000000, zeroes, size, s_dict);
		nb = ft_aux_splice_int(1000000, size, nb, s_dict);
	}
	if (nb >= 1000 && nb < 1000000)
	{
		zeroes++;
		ft_get_text(nb / 1000, zeroes, size, s_dict);
		nb = ft_aux_splice_int(1000, size, nb, s_dict);
	}
	if (nb < 1000)
		ft_get_text(nb, zeroes, size, s_dict);
	write(1, "\n", 1);
}
