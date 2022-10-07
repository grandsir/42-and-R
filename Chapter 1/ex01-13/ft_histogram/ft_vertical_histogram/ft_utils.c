/* *********************************************************************** */
/* file: ft_utils.c                                                        */
/* created by: GrandSir							   */
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
/* created: 2022/10/05 14:32.		                                   */
/* updated: 2022/10/07 08:48         			                   */
/* *********************************************************************** */

#include <unistd.h>
#include "ft_histogram.h"

int	ft_log10(int num)
{
	int	base;

	base = 0;
	while (num >= 10)
	{
		num /= 10;
		base++;
	}
	return (base);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char*s)
{
	while (*s)
	{
		ft_putchar(*s);
		++s;
	}
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
