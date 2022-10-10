/* *********************************************************************** */
/* file: ex02-04.c                                                         */
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
/* created: 2022/10/10 12:59.                                              */
/* updated: 2022/10/10 21:49.                                              */
/* *********************************************************************** */

#include <unistd.h>

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

void	ft_squeeze(char **s1, const char *s2)
{
	int		j;
	int		i;
	char	line[10000];
	char	*str;

	str = *s1;
	i = 0;
	while (*str)
	{
		j = 0;
		while (s2[j])
			if (s2[j++] == *str)
				str++;
		line[i++] = *(str++);
	}

	line[i++] = '\0';

	*s1 = line;
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc > 2)
	{
		s1 = *(++argv);
		s2 = *(++argv);

		ft_squeeze(&s1, s2);

		ft_putline(s1);
	}
	ft_putchar('\n');
	return (0);
}
