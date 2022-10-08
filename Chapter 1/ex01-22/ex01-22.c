/* *********************************************************************** */
/* file: ex01-22.c                                                         */
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
/* created: 2022/10/08 14:29                                               */
/* updated: 2022/10/08 14:29.                                              */
/* *********************************************************************** */

#include <unistd.h>
#define MAXLINE 10000

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_fold_line(char *s)
{
	char	line[MAXLINE];
	int		l;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (*s)
	{
		l = ft_getline(line, &s);
		while (line[i])
		{
			if (l >= 100)
			{
				if (c > (l / 2) % 400 && line[i] == ' ')
				{
					c = 0;
					ft_putchar('\n');
					i = i + 2;
				}
			}
			ft_putchar(line[i++]);
			c++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_fold_line(*(++argv));
	}
	ft_putchar('\n');
	return (0);
}
