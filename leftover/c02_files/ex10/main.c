/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:17:51 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 17:19:03 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size);

int	main(void)
{
	char str_ptr[] = "cacalolo";
	char str_ptr_copy[] = "kakaqeqekikikoko";
	unsigned int size = 3;

	printf("String: %s, Copy: %s\n", str_ptr, str_ptr_copy);
	printf("String: %s, Copy: %s, Return: %d\n", str_ptr, str_ptr_copy, ft_strlcpy(str_ptr_copy, str_ptr, size));
	return (0);
}
