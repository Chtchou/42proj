/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtchou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:00:51 by chtchou           #+#    #+#             */
/*   Updated: 2018/11/13 20:18:26 by chtchou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	check_eof(char *buf)
{
	
}

int			get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*str;
	char		*tmp;
	char		buf[BUFF_SIZE + 1];

	tmp = NULL;
	while (!tmp)
	{	
		if (fd < 0 || !line)
			return (-1);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		buf[BUFF_SIZE] = 0;
		str = (str) ? ft_strjoin(str, buf) : ft_strdup(buf);
		tmp = ft_strchr(str, '\n');
		if (!(tmp) && !ret)
			tmp = strchr(str, '\0');
	}
	*line = (char*)malloc(sizeof(char) * (tmp - str + 1));	
	*tmp = '\0';
	*line = ft_strdup(str);
	free(str);
	str = tmp + 1;

	line = strdup
		if (tmp)
		{
			while 
			*line = tmp;
			line++;
		}
	}



	while ((ret = read(fd, buf, BUFF_SIZE) > 0))
	{
		buf[BUF_SIZE] = 0;
		str = (str) ? ft_strjoin(str, buf) : ft_strcpy(buf);
		tmp = strchr(str, '\n');
		while (!tmp)
		{
			str = ft(strjoin
			tmp =
		}
		

	}
	if (*str)
	{
		
	}
	return (-1);
}
