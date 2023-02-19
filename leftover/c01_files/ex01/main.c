/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:14:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:45:25 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int********* nbr);

int	main(void)
{
	int i = 1;
	int* ptr0 = &i;
	int** ptr1 = &ptr0;
	int*** ptr2 = &ptr1;
	int**** ptr3 = &ptr2;
	int***** ptr4 = &ptr3;
	int****** ptr5 = &ptr4;
	int******* ptr6 = &ptr5;
	int******** ptr7 = &ptr6;
	int********* ptr8 = &ptr7;

	printf("%d %d", i, *********ptr8);
	ft_ultimate_ft(ptr8);
	printf("%d %d", i, *********ptr8);
	return (0);
}
