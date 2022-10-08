/* *********************************************************************** */
/* file: ex01-23.c                                                         */
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
/* created: 2022/10/07 23:48.                                              */
/* updated: 2022/10/08 14:28.                                              */
/* *********************************************************************** */

#include <unistd.h>
#include "ft_remove_comments.h"

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

int	main(int argc, char **argv)
{
	char	*string;

	if (argc > 1)
	{
		string = *(++argv);
		ft_remove_comments(&string);

		ft_putline(string);
	}

	ft_putchar('\n');
	return (0);
}
