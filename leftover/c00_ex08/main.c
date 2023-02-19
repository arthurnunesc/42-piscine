/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:10:26 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/14 15:42:08 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(2);
	// ft_print_combn(0);
	// ft_print_combn(10);
	write(1, "\n", 1);
}
