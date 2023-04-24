/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:50:37 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/27 16:25:30 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	return_value;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	return_value = i + j;
	j = 0;
	while (src[j] && j < (size - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (!(size == 0) && !(i > size))
		dest[i + j] = '\0';
	return (return_value);
}
