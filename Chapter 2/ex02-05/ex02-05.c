/* *********************************************************************** */
/* file: ex02-05.c                                                         */
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
/* created: 2022/10/10 15:54.                                              */
/* updated: 2022/10/10 16:12.                                              */
/* *********************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		ft_putint(num / 10);
		num %= 10;
	}

	ft_putchar(num + '0');
}

int	ft_any(char *s1, const char *s2)
{
	int		j;
	int		i;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
			if (s2[j++] == s1[i])
				return (i);
		i++;
	}

	return (-1);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc > 2)
	{
		s1 = *(++argv);
		s2 = *(++argv);

		ft_putint(ft_any(s1, s2));

	}
	ft_putchar('\n');
	return (0);
}
