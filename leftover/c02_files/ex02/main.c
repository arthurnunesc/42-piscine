/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:23:42 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/17 19:11:36 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char* str);

int	main(void)
{
	char str_ptr[] = "ASHDJKASHDASJKasdaasasHDAOASKLDJA";
	char str_ptr2[] = "asksak1sasa";
	char str_ptr3[] = "";

	printf("String: %s, Result: %d\n", str_ptr, ft_str_is_alpha(str_ptr));
	printf("String: %s, Result: %d\n", str_ptr2, ft_str_is_alpha(str_ptr2));
	printf("String: %s, Result: %d\n", str_ptr3, ft_str_is_alpha(str_ptr3));
	return (0);
}
