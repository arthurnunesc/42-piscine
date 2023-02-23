/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:32:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/17 20:14:20 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strlowcase(char* str);

int	main(void)
{
	char str_ptr[] = "asjdsadklsad";
	char str_ptr2[] = "askdjajSAKDDASKJSA";
	char str_ptr3[] = "";

	printf("String: %s, Result: %s\n", str_ptr, ft_strlowcase(str_ptr));
	printf("String: %s, Result: %s\n", str_ptr2, ft_strlowcase(str_ptr2));
	printf("String: %s, Result: %s\n", str_ptr3, ft_strlowcase(str_ptr3));

	return (0);
}
