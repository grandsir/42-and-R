/* *********************************************************************** */
/* file: ft_print_dash_row.c										       */
/* created by: GrandSir													   */
/*																		   */
/*																		   */
/*					   ,ggg,		gg		,ggggggggggg,				   */
/*					   dP""Y8b		 dP		dP"""88""""""Y8,			   */
/*					   Yb, `88		d8'		Yb,	 88		 `8b			   */
/*					   `"  88	 ,dP'		`"	88		,8P				   */
/*						   88aaad8"				88aaaad8P"				   */
/*						   88""""Yb,	 and	88""""Yb,				   */
/*						   88	  "8b			88	   "8b				   */
/*						   88	   `8i			88		`8i				   */
/*						   88		Yb,			88		 Yb,			   */
/*						   88		 Y8			88		  Y8.grandsir	   */
/*																		   */
/*																		   */
/*																		   */
/* created:	2022/10/05 17:32.											   */
/* updated:	2022/10/06 11:45.											   */
/* *********************************************************************** */

#include "ft_histogram.h"

void	ft_print_dash(int count)
{
	int	c;
	int	j;

	j = 0;
	c = 0;
	while (j < ft_log10(count) + 3)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('+');
	ft_putchar(' ');

	while (c < count)
	{
		ft_putchar('-');
		c++;
	}
	ft_putchar('\n');
}

int	ft_print_dash_row(char *str)
{
	int	longest_word;
	int	c;
	int	wc;

	c = 0;
	longest_word = 0;
	while (*str)
	{
		if ((*str == ' ') || (*str == '\n') || !*(str + 1))
		{
			if (c > longest_word)
			{
				longest_word = c;
			}
			c = 0;
			wc++;
		}
		else
		{
			c++;
		}
		++str;
	}
	ft_print_dash(longest_word);
	return (wc);
}
