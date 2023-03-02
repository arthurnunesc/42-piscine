/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:51:20 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/01 13:12:15 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char* dest, char* src, unsigned int size);

int	main(void)
{
	unsigned int size = 13;
	char	dest_a1[15] = "hola";
	char	src_a2[10] = "comoestas";
	char	dest_b1[15] = "hola";
	char	src_b2[10] = "comoestas";
	
	unsigned int	strlcat_a = ft_strlcat(dest_a1, src_a2, size);
	unsigned int	strlcat_b = strlcat(dest_b1, src_b2, size);	
	printf("%s, return: %d\n", dest_a1, strlcat_a);	
	printf("%s, return: %d\n", dest_b1, strlcat_b);
	return (0);
}
