/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:19:51 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 16:05:44 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strncpy(char* dest, char* src, unsigned int n);

int	main(void)
{
	char str_ptr[] = "toto";
	char str_ptr_copy[] = "kktumama";
	unsigned int n = 10;

	printf("String: %s, Copy: %s\n", str_ptr, str_ptr_copy);
	ft_strncpy(str_ptr_copy, str_ptr, n);
	printf("String: %s, Copy: %s\n", str_ptr, str_ptr_copy);
	return (0);
}
