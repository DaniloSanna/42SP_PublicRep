/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:38:03 by djustino          #+#    #+#             */
/*   Updated: 2022/10/30 15:49:06 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_fd(int fd, char *cacheforward);
static char	*prepare_line(char *cacheforward);
static char	*get_line(char *cacheforward);

char	*get_next_line(int fd)
{
	char		*currentline;
	static char	*cacheforward;

	if (fd < 0 && BUFFER_SIZE < 1)
		return (NULL);
	cacheforward = read_fd(fd, cacheforward);
	if (!cacheforward)
		return (NULL);
	currentline = get_line(cacheforward);
	cacheforward = prepare_line(cacheforward);
	return (currentline);
}
//-----------------------------------------------------------------------------
// FUNCTION -> char	*get_next_line(int fd)
// This Function returns the next line in folder
// Starting creating currentline and the static cacheforward.
// Current_Line is about the actual line that will be printed.
// Cache_Forward is a static thats storage the information after the \n in line
// Check if fd(file) and buffer size is OK, if not NULL.
// Cachefoward receive the read_fd (Thats read a file).

static char	*read_fd(int fd, char *cacheforward)
{
	int		loop;
	char	*this_buffer;

	this_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!this_buffer)
		return (NULL);
	loop = 1;
	while (loop != 0)
	{
		loop = read(fd, this_buffer, BUFFER_SIZE);
		if (loop < 0)
		{
			free(this_buffer);
			return (NULL);
		}
		this_buffer[loop] = '\0';
		cacheforward = ft_strjoin(cacheforward, this_buffer);
		if (ft_strchr(this_buffer, '\n') && cacheforward)
			break ;
	}
	free(this_buffer);
	return (cacheforward);
}

//-----------------------------------------------------------------------------
// FUNCTION -> static char	*read_fd(int fd, char *cacheforward)
// this function receive the cacheforward and File Descriptor
// this_buffer receive malloc from (Buffer_size (default 42)*char) + 1 for \0 
// if error in malloc - Return NULL
// Else, start loop.
// While loop have read from File descriptor.
// loop receive read return, and this_buffer receive whats where read
// by read function.
// if amount of letter is less then 0 some error occurs -> retur NULL.
// add in This_Buffer the \0, because we use ft_strjoin, so it´s have a end.
// Add in CacheFoward whats contains in buffer.
// IF found a break line (\n) && cache was null then break the while
// when found a breake line, break while, free buffer and return to cache

static char	*get_line(char *cacheforward)
{
	int		loop;
	char	*this_buffer;

	loop = 0;
	if (!cacheforward[loop])
		return (NULL);
	while (cacheforward[loop] && cacheforward[loop] != '\n')
		loop++;
	this_buffer = malloc(sizeof(char) * (loop + 2));
	if (!this_buffer)
		return (NULL);
	loop = 0;
	while (cacheforward[loop] && cacheforward[loop] != '\n')
	{
		this_buffer[loop] = cacheforward[loop];
		loop++;
	}
	if (cacheforward[loop] == '\n')
	{
		this_buffer[loop] = cacheforward[loop];
		loop++;
	}
	this_buffer[loop] = '\0';
	return (this_buffer);
}
//-----------------------------------------------------------------------------
// FUNCTION static char	*get_line(char *cacheforward)
// If cache is OK, count to \0 or \n
// buffer receive size of cache until \n and add plus 2 spaces for \n and \0
// if buffer is ok, loop reset, buffer receive cache until \0 or \n
// when founded, keep going. IF actual letter is \n add this to buffer
// add in this buffer NULL/END 
// Return buffer

static char	*prepare_line(char *cacheforward)
{
	int		loop;
	int		loop2;
	char	*this_buffer;

	loop = 0;
	while (cacheforward[loop] && cacheforward[loop] != '\n')
		loop++;
	if (!cacheforward[loop])
	{
		free(cacheforward);
		return (NULL);
	}
	this_buffer = malloc(sizeof(char) * (ft_strlen(cacheforward) - loop + 1));
	if (!this_buffer)
		return (NULL);
	loop++;
	loop2 = 0;
	while (cacheforward[loop])
		this_buffer[loop2++] = cacheforward[loop++];
	this_buffer[loop2] = '\0';
	free(cacheforward);
	return (this_buffer);
}

//-----------------------------------------------------------------------------
// FUNCTION -> static char *prepare_line(char *storage)
// Count until find the \n
// once founded, check if cacheforward is not null.
// ----- Point: begin ----
// Cache has all read information, so have line plus some after \n
// in here get this after.
// ----- Point: end ----
// buffer receive what is after \n in cache.
// if buffer OK continue. Loop add to start one position after \n
// start loop2, while cache is valid
// buffer receive cache, at end buffer receive \0;
// free cache, return buffer.
