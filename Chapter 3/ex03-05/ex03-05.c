/* *********************************************************************** */
/* file: ex03-05.c                                                         */
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
/* updated: 2022/10/18 20:50.                                              */
/* *********************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *s)
{
	while (*s)
		ft_putchar(*(s++));
}

void	ft_itob(int num, int base)
{
	if (num < 0)
	{
		ft_putchar('-');
		num -= 1;
	}

	if (num >= base)
	{
		ft_itob(num / base, base);
		num %= base;
	}
	if (num < 9)
		num += '0';
	else
		num += 'A' - 10;

	ft_putchar(num);
}

int	main(int argc, char **argv)
{
	ft_itob(136, 2);
	ft_putchar('\n');
	return (0);
}
