/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:21:00 by rjobert           #+#    #+#             */
/*   Updated: 2023/02/26 22:42:41 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_clean(unsigned int size, t_table *m_dic)
{
	unsigned int	u_aux;

	u_aux = 0;
	while (u_aux < size)
	{
		if (m_dic[u_aux].litteral != NULL)
			free(m_dic[u_aux].litteral);
		u_aux++;
	}
	free (m_dic);
}

int	ft_error_management(unsigned int n_lines)
{
	if (n_lines == 0)
		write(1, "Dict Error\n", 11);
	else
		write(1, "Error\n", 6);
	return (1);
}

int	ft_check_table(t_table *m_dic, unsigned int n_lines)
{
	unsigned int	i;

	i = 0;
	while (i < 20)
	{
		if (ft_check_struct(i, n_lines, m_dic) == 1)
			return (1);
		i++;
	}
	while (i <= 100)
	{
		if (ft_check_struct(i, n_lines, m_dic) == 1)
			return (1);
		i = i + 10;
	}
	if (ft_check_struct(1000, n_lines, m_dic) == 1)
		return (1);
	if (ft_check_struct(1000000, n_lines, m_dic) == 1)
		return (1);
	if (ft_check_struct(1000000000, n_lines, m_dic) == 1)
		return (1);
	return (0);
}

int	ft_parse_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	main(int argc, char **argv)
{
	char			filename[50];
	unsigned int	value;
	unsigned int	n_lines;
	t_table			*m_dic;

	if (ft_parse_args(argc, argv, &value, filename) != 0)
		return (ft_parse_error());
	n_lines = count_lines(filename);
	m_dic = malloc(sizeof(t_table) * n_lines);
	if (m_dic == NULL || n_lines == 0)
		return (ft_error_management(n_lines));
	if (open_file(filename, m_dic) != 0)
	{
		ft_clean(n_lines, m_dic);
		return (1);
	}
	if (ft_check_table(m_dic, n_lines) == 1)
	{
		ft_clean(n_lines, m_dic);
		write(1, "Dict Error\n", 11);
		return (1);
	}
	ft_splice_int(value, n_lines, m_dic);
	ft_clean(n_lines, m_dic);
	return (0);
}
