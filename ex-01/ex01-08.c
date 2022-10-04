/* *********************************************************************** */
/* file: ex01-08.c                                                         */
/* created by: GrandSir                                                    */
/*                                                                         */
/*                                                                         */
/*			         ,ggg,        gg      ,ggggggggggg, 				   */
/*			         dP""Y8b       dP     dP"""88""""""Y8,				   */
/*			         Yb, `88      d8'     Yb,  88      `8b 				   */
/*			         `"  88    ,dP'       `"  88      ,8P 		           */
/*				         88aaad8"             88aaaad8P"				   */
/*				         88""""Yb,     and    88""""Yb,   			   	   */
/*				         88     "8b           88     "8b				   */
/*				         88      `8i          88      `8i 				   */
/*				         88       Yb,         88       Yb,                 */
/*				         88        Y8         88        Y8.grandsir        */
/* 																		   */
/* 																		   */
/*                                                                         */
/* created: 2022/10/01 09:34.                                              */
/* updated: 2022/13/01 17:25.                                              */
/* *********************************************************************** */

#include <unistd.h>

/* Defining our own functions */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *str)
{
	while (*str)
	{
		write(1, &(*(str++)), 1);
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

	if (num < 10)
	{
		ft_putchar(num + '0');
	}
}

/* K&R Solution */
int	ft_count_char(char *str, char c)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		if (*str == c)
		{
			counter++;
		}
		str++;
	}

	return (counter);
}

/* I did not write my own ft_printf because 
 * I don't want to write 1500 lines of code.
 */
int	main(int argc, char **argv)
{
	char	*string;

	if (argc > 1)
	{
		string = *(++argv);

		ft_putline("Found tabs: ");
		ft_putint(ft_count_char(string, '\t'));
		ft_putline(", spaces: ");
		ft_putint(ft_count_char(string, ' '));
		ft_putline(", newlines: ");
		ft_putint(ft_count_char(string, '\n'));
	}
	ft_putchar('\n');
	return (0);
}
