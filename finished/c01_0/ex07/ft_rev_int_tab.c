/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:42:12 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/18 15:54:07 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	helper;
	int	index;

	helper = 0;
	index = 0;
	size = size - 1;
	while (index < size)
	{
		helper = tab[index];
		tab[index] = tab[size];
		tab[size] = helper;
		index++;
		size--;
	}
}
