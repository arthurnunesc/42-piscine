/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:32:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 13:27:32 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strcapitalize(char* str);

int	main(void)
{
	char str_ptr[] = "salut, comMEnt tU vAS ? 42MOTs quarANTE-deux; cinquante+et+un";
	char str_ptr2[] = "askdjajSAKDDASKJSA";

	printf("String: %s\n", str_ptr);
	printf("Result: %s\n", ft_strcapitalize(str_ptr));
	printf("String: %s\n", str_ptr2);
	printf("Result: %s\n", ft_strcapitalize(str_ptr2));

	return (0);
}
