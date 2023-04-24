/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:34:21 by vmontoli          #+#    #+#             */
/*   Updated: 2023/02/26 22:01:59 by dbriseno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# define UINT_MAX 4294967295U

typedef struct s_struct
{
	unsigned int	n;
	char			*litteral;
}	t_table;
struct	s_BufD
{
	unsigned int	bytes_read;
	int				file_opened;
	unsigned int	i;
	int				j;
	int				k;
};

unsigned int	ft_key(char *str);
char			*ft_val(char *str);
int				ft_checkerror(char str[]);
int				ft_max(char *str);
void			ft_strcpy(char *dst, char *src);
int				ft_parse_args(int argc, char **argv,
					unsigned int *number_to_print,
					char *dict_file_name);
void			ft_pop(unsigned int nb, char *str, t_table *s_dict, int pos);
char			*ft_search_struct(unsigned int nb, int size, t_table *s_dict);
t_table			*ft_create_struct(int n_lines);
int unsigned	count_lines(char *namefile);
int unsigned	parse_file(unsigned int bytes_read, char char_dict[],
					char dest[]);
void			ft_file_clean(unsigned int pos, t_table *v_struct);
int				ft_strlen(char *str);
int				open_file(char *namefile, t_table *v_struct);
void			ft_splice_int(unsigned int nb, int size, t_table *s_dict);
void			ft_get_text(unsigned int num, int zeroes,
					int size, t_table *s_dict);
void			ft_printstr_sb(char *str);
void			ft_printstr(char *str);
int				ft_check_struct(unsigned int nb,
					unsigned int size, t_table *s_dict);
#endif
