/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalazar <ksalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:11:05 by ksalazar          #+#    #+#             */
/*   Updated: 2023/02/19 23:28:51 by ksalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "check_views.h"

// Check top view
bool	check_tv(int map[][4], int i[16])
{
	int		c[4];
	int		k;
	int		j;
	bool	continue_next_col;

	j = 0;
	while (j < 4)
	{
		c[j] = 0;
		continue_next_col = false;
		k = 0;
		while (k < 4 && !continue_next_col)
		{
			c[j] += 1;
			if (map[k][j] == 4)
				continue_next_col = true;
			++k;
		}
		++j;
	}
	return (c[0] == i[0] && c[1] == i[1] && c[2] == i[2] && c[3] == i[3]);
}

bool	check_bv(int map[][4], int i[16])
{
	int		c[4];
	int		k;
	int		j;
	bool	continue_next_col;

	j = 0;
	while (j < 4)
	{
		c[j] = 0;
		continue_next_col = false;
		k = 3;
		while (k >= 0 && !continue_next_col)
		{
			c[j] += 1;
			if (map[k][j] == 4)
				continue_next_col = true;
			--k;
		}
		++j;
	}
	return (c[0] == i[4] && c[1] == i[5] && c[2] == i[6] && c[3] == i[7]);
}
