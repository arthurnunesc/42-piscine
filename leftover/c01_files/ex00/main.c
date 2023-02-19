/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:02:52 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/15 14:45:38 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int* nbr);

int	main(void)
{
	int* ptr;
	int	i;

	ptr = &i;
	i = 1;
	printf("%d %d", i, *ptr);
	ft_ft(ptr);
	printf("%d %d", i, *ptr);
	return (0);
}
