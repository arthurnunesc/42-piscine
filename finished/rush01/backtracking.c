/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalazar <ksalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:55:56 by ksalazar          #+#    #+#             */
/*   Updated: 2023/02/19 23:26:07 by ksalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"
#include "check_views.h"
#include <stdio.h>
#include <stdbool.h>

int		g_digits[4] = {1, 2, 3, 4};
int		g_i[16];

void	backtracking_aux(bool mrow[][4], bool mcol[][4], int m[][4], int ir, int ic)
{
	int	i_digits;

	if (ic == 4 && ir == 0 && check_tv(m, g_i))
		write_matrix(m);
	else if (ir == 4)
		backtracking_aux(mrow, mcol, m, 0, ic + 1);
	else
	{
		i_digits = 0;
		while (i_digits < 4)
		{
			if (!mcol[i_digits][ic] && !mrow[ir][i_digits])
			{
				mcol[i_digits][ic] = true;
				mrow[ir][i_digits] = true;
				m[ir][ic] = g_digits[i_digits];
				backtracking_aux(mrow, mcol, m, ir + 1, ic);
				mcol[i_digits][ic] = false;
				mrow[ir][i_digits] = false;
			}
			++i_digits;
		}
	}
}

void	backtracking(int map[][4], int input[16])
{
	bool	mcol[4][4];
	bool	mrow[4][4];
	int		i;
	int		j;

	i = 0;
	while (i < 16)
	{
		g_i[i] = input[i];
		++i;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mcol[i][j] = false;
			mrow[i][j] = false;
			map[i][j] = 0;
			++j;
		}
		++i;
	}
	backtracking_aux(mrow, mcol, map, 0, 0);
}
