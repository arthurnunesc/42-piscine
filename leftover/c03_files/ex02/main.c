/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:48:43 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/27 16:40:29 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char*	ft_strcat(char* s1, char* s2);

int	main(void)
{
	char	str_a1[20] = "str_a1 ";
	char	str_a2[7] = "str_a2";
	char	str_b1[20] = "str_b1 ";
	char	str_b2[7] = "str_b2";
	
	char*	cat_a = ft_strcat(str_a1, str_a2);
	char*	cat_b = strcat(str_b1, str_b2);	
	printf("%s\n", cat_a);	
	printf("%s\n", cat_b);
	return (0);
}
