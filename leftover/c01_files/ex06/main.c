/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:34:02 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:44:27 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char* str);

int	main(void)
{
	char* ptr;
	int str_length;

	ptr = "toto";
	str_length = ft_strlen(ptr);
	printf("The length of the string '%s' is of %d characters", ptr, str_length);
	return (0);
}
