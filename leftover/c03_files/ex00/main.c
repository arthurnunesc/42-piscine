/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:30:17 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/28 13:16:11 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char* s1, char* s2);

int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "hola ";

	printf("%d\n", ft_strcmp(str1, str2));	
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
