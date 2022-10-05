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
/* created:	2022/10/05 22:07.											   */
/* updated:	2022/10/05 22:59.											   */
/* *********************************************************************** */


#include "ft_print.h"

void	ft_print_histogram(int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		ft_putline("▋");
		i++;
	}
}

void	ft_put_new_number(int num, int word, int word_count)
{
	int	sp;
	int	j;

	sp = ft_log10(word_count) - ft_log10(num);
	while (j < sp)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putint(num);
	ft_putchar(' ');
	ft_putchar('|');
	ft_putline("  ");
	ft_print_histogram(word);
	ft_putchar('\n');
}

void	ft_print_num_row(char *str, int word_count)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (*str)
	{
		if ((*str == ' ') || (*str == '\n') || !*(str + 1))
		{
			ft_put_new_number(++i, c, word_count);
			ft_putchar('\n');
			c = 0;
		}
		else
		{
			c++;
		}
		++str;
	}
}
