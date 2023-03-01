/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:50:37 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/01 13:12:19 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	dstlen = 0;
	srclen = 0;
	while (dest[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (size <= dstlen || size == 0)
		return (srclen + size);
	i = dstlen;
	while (src[j] && j < (size - dstlen - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (srclen + dstlen);
}
