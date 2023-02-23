/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:29:26 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 15:42:18 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strcpy(char* dest, char* src);

int	main(void)
{
	char str_ptr[] = "toto";
	char str_ptr_copy[] = "kjkjkjkjaaaa";
	printf("String: %s, Copy: %s\n", str_ptr, str_ptr_copy);
	printf("Using ft_strcpy from String to Copy...\n");
	ft_strcpy(str_ptr_copy, str_ptr);
	printf("String: %s, Copy: %s\n", str_ptr, str_ptr_copy);
	return (0);
}
