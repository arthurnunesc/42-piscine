/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:07:48 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/17 19:10:49 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char* str);

int	main(void)
{
	char str_ptr[] = "1212a2131";
	char str_ptr2[] = "";
	char str_ptr3[] = "1120231312";

	printf("String: %s, Result: %d\n", str_ptr, ft_str_is_numeric(str_ptr));
	printf("String: %s, Result: %d\n", str_ptr2, ft_str_is_numeric(str_ptr2));
	printf("String: %s, Result: %d\n", str_ptr3, ft_str_is_numeric(str_ptr3));
	return (0);
}
