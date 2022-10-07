/* *********************************************************************** */
/* file: ex01-18.c                                                         */
/* created by: GrandSir                                                    */
/*                                                                         */
/*                                                                         */
/*                ,ggg,        gg      ,ggggggggggg,                       */
/*                dP""Y8b       dP     dP"""88""""""Y8,                    */
/*                Yb, `88      d8'     Yb,  88      `8b                    */
/*                `"  88    ,dP'       `"  88      ,8P                     */
/*                    88aaad8"             88aaaad8P"                      */
/*                    88""""Yb,     and    88""""Yb,                       */
/*                    88     "8b           88     "8b                      */
/*                    88      `8i          88      `8i                     */
/*                    88       Yb,         88       Yb,                    */
/*                    88        Y8         88        Y8.grandsir           */
/*                                                                         */
/*                                                                         */
/*                                                                         */
/* created: 2022/10/07 10:02.                                              */
/* updated: 2022/10/07 11:56.                                              */
/* *********************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define MAXLINE 1000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *str)
{
	while (*str)
	{
		ft_putchar(*(str++));
	}
}

int	ft_getline(char line[], char **arg)
{
	int		c;
	int		i;
	char	*s;

	c = 0;
	i = 0;
	s = *arg;
	while (*s)
	{
		*arg = *arg + 1;
		line[i] = *s;
		i++;
		if (*s == '\n')
		{
			break ;
		}
		s++;
	}
	line[i] = '\0';
	return (i);
}

void	ft_remove_trailing_spaces(char *str)
{
	char	line[MAXLINE];
	int		s;
	int		l;

	while (*str)
	{
		l = ft_getline(line, &str);
		s = l;
		while (line[s] == ' ' || line[s] == '\t' || !line[s])
		{
			s--;
		}
		if (s != 0)
		{
			s++;
		}
		line[s] = '\0';
		ft_putline(line);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_remove_trailing_spaces(*(++argv));
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
