/* *********************************************************************** */
/* file: ex01-09.c                                                         */
/* created by: GrandSir                                                    */
/*                                                                         */
/*                                                                         */
/*                     ,ggg,        gg      ,ggggggggggg,                  */
/*                     dP""Y8b       dP     dP"""88""""""Y8,               */
/*                     Yb, `88      d8'     Yb,  88      `8b               */
/*                     `"  88    ,dP'       `"  88      ,8P                */
/*                         88aaad8"             88aaaad8P"                 */
/*                         88""""Yb,     and    88""""Yb,                  */
/*                         88     "8b           88     "8b                 */
/*                         88      `8i          88      `8i                */
/*                         88       Yb,         88       Yb,               */
/*                         88        Y8         88        Y8.grandsir      */
/*                                                                         */
/*                                                                         */
/*                                                                         */
/* created: 2022/10/01 09:59.                                              */
/* updated: 2022/10/02 14:26.                                              */
/* *********************************************************************** */

#include <unistd.h>
#define YES 1 /* A little Objective-C reference here */
#define NO 0

/* Defining our own functions */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* K&R Solution */
void	ft_remove_blanks(char *s)
{
	int	encountered_space;

	encountered_space = NO;
	while (*s)
	{
		if (*s == ' ')
		{
			if (encountered_space)
			{
				s++;
				continue ;
			}
			encountered_space = YES;
		}
		else
		{
			encountered_space = NO;
		}
		ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_remove_blanks(*(++argv));
	}
	ft_putchar('\n');
	return (0);
}
