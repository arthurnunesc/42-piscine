/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:49:57 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/27 16:34:37 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char* ft_strstr(char* src, char* to_find);

int	main(void)
{
	char	str_a1[15] = "haystack";
	char	str_a2[3] = "ack";
	char	str_b1[10] = "haystack";
	char	str_b2[4] = "ack";
	
	char*	strstr_a = ft_strstr(str_a1, str_a2);
	char*	strstr_b = strstr(str_b1, str_b2);	
	printf("%s\n", strstr_a);	
	printf("%s\n", strstr_b);
	return (0);
}
