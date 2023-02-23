/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:32:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/21 19:11:09 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strupcase(char* str);

int	main(void)
{
	char str_ptr[] = "asjdsadklsad";
	char str_ptr2[] = "askdjajSAKDDASKJSA";
	char str_ptr3[] = "";

	printf("String: %s\n", str_ptr);
	printf("Result: %s\n", ft_strupcase(str_ptr));
	printf("String: %s\n", str_ptr2);
	printf("Result: %s\n", ft_strupcase(str_ptr2));
	printf("String: %s\n", str_ptr3);
	printf("Result: %s\n", ft_strupcase(str_ptr3));

	return (0);
}
