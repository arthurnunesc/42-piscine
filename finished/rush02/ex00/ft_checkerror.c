/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerror.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarin-l <amarin-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:44:21 by amarin-l          #+#    #+#             */
/*   Updated: 2023/02/26 21:59:39 by dbriseno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_conditions(char cur_char, char next_char, int error, int *block)
{	
	if ((cur_char >= '0' && cur_char <= '9') && (*block == 1))
	{
		if (next_char == ' ' || next_char == '\t' || next_char == ':')
			*block = 2;
	}
	else if ((cur_char == ' ' || next_char == '\t' || cur_char == ':'))
	{
		if (*block == 2)
		{
			if (cur_char == ':' && (next_char >= ' ' && next_char <= '~'))
				*block = 3;
		}
	}
	else if ((cur_char >= ' ' && cur_char <= '~') && *block == 3)
		error = 0;
	else
		error = 1;
	return (error);
}

int	ft_checkerror(char str[])
{
	int	i;
	int	error;
	int	block;
	int	*pblock;

	i = 0;
	error = 0;
	block = 1;
	pblock = &block;
	if (str[0] < 48)
		return (1);
	while (error == 0 && str[i] != '\0' )
	{
		error = check_conditions(str[i], str[i + 1], error, pblock);
		i++;
	}
	return (error);
}
