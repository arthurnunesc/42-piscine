/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:35:14 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 20:10:20 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char* str);

int	main(void)
{
	char str_ptr[] = "Coucou\ntu vas bien ?";
	char str_ptr2[] = "KKKKKK\nmeu\novo\n";

	printf("String: %s\nResult:", str_ptr);
	ft_putstr_non_printable(str_ptr);
	printf("\nString: %s\nResult:", str_ptr2);
	ft_putstr_non_printable(str_ptr2);
	return (0);
}
