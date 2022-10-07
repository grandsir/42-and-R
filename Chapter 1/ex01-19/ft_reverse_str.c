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
/* created: 2022/10/07 19:36.                                              */
/* updated: 2022/10/07 19:48.                                              */
/* *********************************************************************** */

#include <unistd.h>
#define MAXLINE 1000

/* Defining our own functions */
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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		i++;
	}

	return (i);
}


void	ft_reverse_str(char *str[])
{
	char	line[1000];
	int		l;
	int		i;
	char	*s;

	s = *str;
	l = ft_strlen(s);
	i = 0;
	while (l > 0)
	{
		line[i++] = *(s + --l);
	}

	line[i++] = '\0';

	*str = line;
}
