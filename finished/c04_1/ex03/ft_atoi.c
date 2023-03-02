/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:08:18 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/02 15:30:22 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	counter;

	i = 0;
	number = 0;
	counter = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}	
	if (counter % 2 == 0)
		counter = 1;
	else
		counter = -1;
	return (number * counter);
}
