/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:12:12 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/17 19:16:46 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char* str);

int	main(void)
{
	char str_ptr[] = "AKJSDKJDAKS";
	char str_ptr2[] = "ASKDSAJKkASLKSADKAMCZXM";
	char str_ptr3[] = "";

	printf("String: %s, Result: %d\n", str_ptr, ft_str_is_uppercase(str_ptr));
	printf("String: %s, Result: %d\n", str_ptr2, ft_str_is_uppercase(str_ptr2));
	printf("String: %s, Result: %d\n", str_ptr3, ft_str_is_uppercase(str_ptr3));
	return (0);
}
