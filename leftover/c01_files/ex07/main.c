/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:42:39 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/16 18:32:58 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int* tab, int size);

int	main(void)
{
	int ptr_length = 4;
	int nbr_arr[4] = {1, 2, 3, 4};
	int* nbr_ptr;

	nbr_ptr = &nbr_arr[0];

	printf("Number pointer: ");
	for(int i = 0; i < ptr_length; ++i) {
		nbr_ptr[i] = nbr_arr[i];
    	printf("%d", nbr_ptr[i]);
  	}
	printf("\n");

	printf("Using ft_rev_int_tab to reverse the pointer\n");
	ft_rev_int_tab(nbr_ptr, ptr_length);

	printf("Number pointer: ");
	for(int j = 0; j < ptr_length; j++) {
		printf("%d", nbr_ptr[j]);
	}
	printf("\n");
	return (0);
}
