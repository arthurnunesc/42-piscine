/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:18:25 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/17 19:30:12 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char* str);

int	main(void)
{
	char str_ptr[] = "asjdsadklsad";
	char str_ptr2[] = "askdjajskjdsa\n";
	char str_ptr3[] = "";

	printf("String: %s, Result: %d\n", str_ptr, ft_str_is_printable(str_ptr));
	printf("String: %s, Result: %d\n", str_ptr2, ft_str_is_printable(str_ptr2));
	printf("String: %s, Result: %d\n", str_ptr3, ft_str_is_printable(str_ptr3));

	return (0);
}
