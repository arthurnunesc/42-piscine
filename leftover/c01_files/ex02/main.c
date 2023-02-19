/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:33:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:45:13 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int* a, int* b);

int	main(void)
{
	int nbr_a;
	int nbr_b;
	int* ptr_a;
	int* ptr_b;
	
	ptr_a = &nbr_a;
	ptr_b = &nbr_b;
	nbr_a = 42;
	nbr_b = 1187321;

	printf("A(variable, pointer): %d, %d\n", nbr_a, *ptr_a);
	printf("B(variable, pointer): %d, %d\n", nbr_b, *ptr_b);
	printf("Using ft_swap with A and B pointers\n");
	ft_swap(ptr_a, ptr_b);
	printf("A(variable, pointer): %d, %d\n", nbr_a, *ptr_a);
	printf("B(variable, pointer): %d, %d\n", nbr_b, *ptr_b);
	return (0);
}
