/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:40:32 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:44:50 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int* a, int* b);

int	main(void)
{
	int nbr_a;
	int nbr_b;
	int* ptr_a;
	int* ptr_b;

	nbr_a = 42;
	nbr_b = 10;
	ptr_a = &nbr_a;
	ptr_b = &nbr_b;

	printf("Pointers(a, b): %d, %d\n", *ptr_a, *ptr_b);
	printf("Using ft_ultimate_div_mod to change pointers from numbers to div/mod values\n");
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("Pointers(a, b): %d, %d\n", *ptr_a, *ptr_b);	
	return (0);
}
