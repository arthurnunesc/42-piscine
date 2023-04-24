/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:08 by vmontoli          #+#    #+#             */
/*   Updated: 2023/02/26 13:56:55 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

int	ft_parse_args(int argc, char **argv, unsigned int *number_to_print,
			char *dict_file_name)
{
	char	from_stdin[20];

	if (argc == 1)
	{
		ft_strcpy(dict_file_name, "numbers.dict");
		read(0, from_stdin, 20);
		if (ft_max(from_stdin) != 1)
			return (1);
		*number_to_print = ft_key(from_stdin);
		return (0);
	}
	else if (argc == 2 && ft_max(argv[1]) == 1)
	{
		ft_strcpy(dict_file_name, "numbers.dict");
		*number_to_print = ft_key(argv[1]);
		return (0);
	}
	else if (argc == 3 && ft_max(argv[2]) == 1)
	{
		ft_strcpy(dict_file_name, argv[1]);
		*number_to_print = ft_key(argv[2]);
		return (0);
	}
	return (1);
}
