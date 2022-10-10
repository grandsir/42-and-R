/* *********************************************************************** */
/* file: ft_htoi.c                                                         */
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
/* created: 2022/10/10 12:48.                                              */
/* updated: 2022/10/10 12:49.                                              */
/* *********************************************************************** */

#include <unistd.h>
#include "ft_print.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

int	ft_pow(int base, int pow)
{
	int	c;
	int	val;

	val = 1;
	c = 0;

	while (c < pow)
	{
		val *= base;
		c++;
	}

	return (val);
}

int	ft_base_16(char num, int pow)
{
	if (num >= '0' && num <= '9')
		return (ft_pow(16, pow) * (num - '0'));

	else if (num >= 'a' && num <= 'f')
		return (ft_pow(16, pow) * (num - 'a' + 10));

	else if (num >= 'A' && num <= 'F')
		return (ft_pow(16, pow) * (num - 'A' + 10));

	return (-1);
}

// iterative solution
int	htoi(char *s)
{
	int	i;
	int	r;
	int	b;

	i = 0;
	r = 0;
	b = 0;

	if (*s == '0' && (*(s + 1) == 'x' || *(s + 1) == 'X'))
		i += 2;

	while (s[i])
	{
		b = ft_base_16(s[i], (ft_strlen(s) - 1) - i);
		if (b == -1)
		{
			print_err(s[i], i);
			return (-1);
		}

		r += b;
		i++;
	}

	return (r);
}