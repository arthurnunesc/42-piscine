/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalazar <ksalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:31:29 by ksalazar          #+#    #+#             */
/*   Updated: 2023/02/19 19:37:53 by ksalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	write_matrix(int matrix[][4])
{
	int	i;
	int	j;

	printf("\n");
	i = 0;
	while (i < 4)
	{
		printf("[");
		j = 0;
		while (j < 4)
		{
			printf("%d", matrix[i][j]);
			if (j != 3)
				printf(", ");
			++j;
		}
		printf("]\n");
		++i;
	}
	printf("\n");
}

void	write_aray(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		++i;
	}
}

// Fill the matrix with zeros
void	fill_matrix(int matrix[][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			++j;
		}
		++i;
	}
}
