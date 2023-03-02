/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:57:55 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/01 13:00:10 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char* s1, char* s2, unsigned int n);

int	main(void)
{
	char	str1[10] = "hola";
	char	str2[6] = "hola ";
	unsigned int	limit = 5;

	printf("%d\n", ft_strncmp(str1, str2, limit));	
	printf("%d\n", strncmp(str1, str2, limit));
	return (0);
}
