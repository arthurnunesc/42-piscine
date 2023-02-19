/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:40:32 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:45:04 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int* div, int* mod);

int	main(void)
{
	int nbr_a;
	int nbr_b;
	int div;
	int mod;
	int* ptr_div;
	int* ptr_mod;

	nbr_a = 42;
	nbr_b = 10;
	ptr_div = &div;
	ptr_mod = &mod;

	printf("Numbers(a, b): %d, %d\n", nbr_a, nbr_b);
	printf("Pointers(division, remainder): %d, %d\n", *ptr_div, *ptr_mod);
	printf("Using ft_div_mod with A and B numbers to populate pointers\n");
	ft_div_mod(nbr_a, nbr_b, ptr_div, ptr_mod);
	printf("Pointers(division, remainder): %d, %d\n", *ptr_div, *ptr_mod);	
	return (0);
}
