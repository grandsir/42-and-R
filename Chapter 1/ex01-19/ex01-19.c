/* *********************************************************************** */
/* file: ex01-19.c                                                         */
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
/* created: 2022/10/07 14:15.                                              */
/* updated: 2022/10/07 19:50.                                              */
/* *********************************************************************** */

#include "ft_reverse_str.h"
#define MAXLINE 1000

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

void	ft_reverse_lines(char *str)
{
	char	line[MAXLINE];
	char	*p;

	while (*str)
	{
		ft_getline(line, &str);
		p = line;
		ft_reverse_str(&p);
		ft_putline(p);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_reverse_lines(*(++argv));
	}
	ft_putchar('\n');
	return (0);
}
