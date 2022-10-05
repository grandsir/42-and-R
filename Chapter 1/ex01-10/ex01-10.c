/* *********************************************************************** */
/* file: ex01-11.c                                                         */
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
/* created: 2022/10/01 11:11.                                              */
/* updated: 2022/10/02 17:26.                                              */
/* *********************************************************************** */

#include <unistd.h>

/* Defining our own functions */
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

/* K&R Solution */
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

int	main(int argc, char**argv)
{
	if (argc > 1)
	{
		ft_repr(*(++argv));
	}
	return (0);
}
