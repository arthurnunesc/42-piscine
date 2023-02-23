/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalazar <ksalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:00:09 by ksalazar          #+#    #+#             */
/*   Updated: 2023/02/19 23:28:09 by ksalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "utils.h"
#include "backtracking.h"
#include "check_views.h"

int	main(int argc, char **argv)
{
	int	num_args;
	int	map[4][4];
	int	input[16];
	int	i;

	num_args = argc - 1;
	if (num_args != 16)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < num_args)
	{
		input[i] = atoi(argv[i + 1]);
		++i;
	}
	backtracking(map, input);
	return (0);
}
