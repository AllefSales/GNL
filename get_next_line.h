/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:12:35 by ajordan-          #+#    #+#             */
/*   Updated: 2021/09/01 12:32:38 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
void	ft_check_read(int rd_bytes, char *buff);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_line(char *left_str);
char	*ft_new_left_str(char *left_str);

#endif
