/* *********************************************************************** */
/* file: ft_itoa.c                                                         */
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
/* created: 2022/10/18 13:29.	                                           */
/* updated: 2022/10/18 13:29.                                              */
/* *********************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *s)
{
	while (*s)
	{
		ft_putchar(*(s++));
	}
}

void	ft_itoa(int n, char s[])
{

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}

	if (n >= 10)
	{
		ft_itoa(n / 10, s);
		n %= 10;
	}

	ft_putchar(n + '0');
}

int	main(int argc, char **argv)
{
	char	line[1000];

	ft_itoa(16, line);
	return (0);
}
