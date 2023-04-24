/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fileopen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbekerma <jbekerma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:51:09 by jbekerma          #+#    #+#             */
/*   Updated: 2023/02/26 18:26:38 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "functions.h"

void	ft_file_clean(unsigned int pos, t_table *v_struct)
{
	unsigned int	aux;

	aux = 0;
	while (pos != 0)
	{
		if (v_struct[aux].litteral != NULL)
			free(v_struct[aux].litteral);
		pos--;
	}
	free(v_struct);
}

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux])
		aux++;
	return (aux + 1);
}

int	ft_readfile2(char *c_dic, struct s_BufD *bfd, t_table *v_struct)
{
	while (c_dic[bfd->i] == '\n' && bfd->i < bfd->bytes_read)
		bfd->i = bfd->i + 1;
	bfd->j = bfd->i;
	while (c_dic[bfd->i] != '\n' && bfd->i < bfd->bytes_read)
		bfd->i = bfd->i + 1;
	if (bfd->i < bfd->bytes_read)
	{
		c_dic[bfd->i] = '\0';
		v_struct[bfd->k].litteral = (char *) malloc(sizeof(char)
				* ft_strlen(&c_dic[bfd->j]));
		if (v_struct[bfd->k].litteral != NULL)
		{
			ft_pop(ft_key(&c_dic[bfd->j]), ft_val(&c_dic[bfd->j]),
				v_struct, bfd->k);
			bfd->k = bfd->k + 1;
			bfd->i = bfd->i + 1;
		}
		else
		{
			close(bfd->file_opened);
			ft_file_clean(bfd->i, v_struct);
			return (1);
		}
	}
	return (0);
}

int	open_file(char *namefile, t_table *v_struct)
{
	char			c_dic[1048576];
	struct s_BufD	bfd;

	bfd.k = 0;
	bfd.file_opened = open(namefile, O_RDONLY);
	bfd.bytes_read = read(bfd.file_opened, c_dic, 1048576);
	bfd.i = 0;
	while (bfd.i < bfd.bytes_read)
	{
		if (ft_readfile2(c_dic, &bfd, v_struct) == 1)
			return (1);
	}
	close(bfd.file_opened);
	return (0);
}
