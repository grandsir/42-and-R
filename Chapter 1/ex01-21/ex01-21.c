/* *********************************************************************** */
/* file: ex01-21.c                                                         */
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
/* created: 2022/10/07 22:53.                                              */
/* updated: 2022/10/07 22:53.                                              */
/* *********************************************************************** */

#include <unistd.h>
#define NUMBER_OF_SPACES 4
#define MAXLINE 1000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}	
}

void	ft_repr(char*s)
{
	while (*s)
	{	
		if (*s == '\t')
		{
			ft_putline("\\t");
		}
		else if (*s == '\b')
		{
			ft_putline("\\");
		}
		else
		{
			ft_putchar(*s);
		}
		++s;
	}
}

void	ft_entab(char *str)
{
	char	line[MAXLINE];
	int		i;
	int		s;

	while (*str)
	{
		if (*str == ' ')
		{
			if (++s == NUMBER_OF_SPACES)
			{
				line[i++] = '\t';
				s = 0;
			}
		}
		else
		{
			while (s > 0 && s--)
			{
				line[i++] = ' ';
			}
			line[i++] = *str;
		}
		str++;
	}
	line[++i] = '\0';
	ft_repr(line);
}

int	main(int argc, char **argv)
{
	char	*string;

	string = *(++argv);
	if (argc > 1)
	{
		ft_putline("Spaced Version: ");
		ft_repr(string);
		ft_putline("\n\n");
		ft_putline("Tabbed Version: ");
		ft_entab(string);
	}

	ft_putchar('\n');
	return (0);
}
