/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecountlines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbekerma <jbekerma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 00:24:59 by jbekerma          #+#    #+#             */
/*   Updated: 2023/02/26 18:26:16 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

unsigned int	ft_readfile(char *c_dic, struct s_BufD *bfd)
{
	while (c_dic[bfd->i] == '\n' && bfd->i < bfd->bytes_read)
		bfd->i = bfd->i +1;
	bfd->j = bfd->i;
	while (c_dic[bfd->i] != '\n' && bfd->i < bfd->bytes_read)
		bfd->i = bfd->i + 1;
	if (bfd->i < bfd->bytes_read)
	{
		c_dic[bfd->i] = '\0';
		if (ft_checkerror(&c_dic[bfd->j]) == 1)
			return (0);
		c_dic[bfd->i] = '\n';
		bfd->k = bfd->k + 1;
		bfd->i = bfd->i + 1;
	}
	return (1);
}

unsigned int	count_lines(char *namefile)
{
	char			c_dic[1048576];
	struct s_BufD	bfd;

	bfd.k = 0;
	bfd.file_opened = open(namefile, O_RDONLY);
	bfd.bytes_read = read(bfd.file_opened, c_dic, 1048576);
	bfd.i = 0;
	if (bfd.file_opened < 0)
		return (0);
	while (bfd.i < bfd.bytes_read)
	{
		if (ft_readfile(c_dic, &bfd) == 0)
			return (0);
	}
	close(bfd.file_opened);
	if (bfd.k == 0)
		return (0);
	return (bfd.k);
}
