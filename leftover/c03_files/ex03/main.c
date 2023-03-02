/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:42:06 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/26 13:47:48 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char*	ft_strncat(char* dest, char* src, unsigned int nb);

int	main(void)
{
	char	str_a1[14] = "str_a1 ";
	char	str_a2[6] = "str_a2";
	char	str_b1[17] = "str_b1 ";
	char	str_b2[6] = "str_b2";
	unsigned int	nb = 3;
	
	char*	cat_a = ft_strncat(str_a1, str_a2, nb);
	char*	cat_b = strncat(str_b1, str_b2, nb);	
	printf("%s\n", cat_a);	
	printf("%s\n", cat_b);
	return (0);
}
