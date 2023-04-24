/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:59:28 by rjobert           #+#    #+#             */
/*   Updated: 2023/02/26 22:00:33 by dbriseno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "functions.h"

t_table	*ft_create_struct(int n_lines)
{
	t_table	*s_dict;

	s_dict = malloc(n_lines * sizeof(t_table));
	return (s_dict);
}

void	ft_pop(unsigned int nb, char *str, t_table *s_dict, int pos)
{
	s_dict[pos].n = nb;
	ft_strcpy(s_dict[pos].litteral, str);
}

char	*ft_search_struct(unsigned int nb, int size, t_table *s_dict)
{
	int		i;
	char	*error_output;

	error_output = "Dict Error\n";
	i = 0;
	while (i < size)
	{
		if (s_dict[i].n == nb)
			return (s_dict[i].litteral);
		i++;
	}
	return (error_output);
}

int	ft_check_struct(unsigned int nb, unsigned int size, t_table *s_dict)
{
	unsigned int		i;

	i = 0;
	while (i < size)
	{
		if (s_dict[i].n == nb)
			return (0);
		i++;
	}
	return (1);
}
