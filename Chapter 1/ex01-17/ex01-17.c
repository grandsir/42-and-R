/* *********************************************************************** */
/* file: ex01-17.c                                                         */
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
/* created: 2022/10/06 18:26.                                              */
/* updated: 2022/10/06 23:31.                                              */
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

void	ft_print_long_lines(char *str)
{
	char	line[MAXLINE];
	int		s;
	int		l;

	while (*str)
	{
		l = ft_getline(line, &str);
		if (l > 80)
		{
			ft_putline(line);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_print_long_lines(*(++argv));
	}

	return (0);
}
