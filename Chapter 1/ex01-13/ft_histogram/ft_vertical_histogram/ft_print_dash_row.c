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
/* created:	2022/10/06 14:41.											   */
/* updated:	2022/10/06 15:43.											   */
/* *********************************************************************** */

#include "ft_histogram.h"


int	ft_count_words(char *str)
{
	int	wc;

	wc = 0;
	while (*str)
	{
		if ((*str == ' ') || (*str == '\n') || !*(str + 1))
		{
			wc++;
		}
		++str;
	}

	return (wc);
}


void	ft_print_dash_row(int count, int l_word)
{
	int	i;
	int	sp;
	int	j;

	sp = ft_log10(l_word) + 3;
	j = 0;

	while (j <= sp)
	{
		ft_putchar(' ');
		j++;
	}

	ft_putchar('+');
	ft_putchar(' ');
	i = 0;
	while (i < count * 6)
	{
		ft_putchar('_');
		i++;
	}

	ft_putchar('\n');
}

void	ft_print_num_row(int count, int l_word)
{
	int	i;
	int	sp;
	int	j;

	sp = ft_log10(l_word) + 6;
	j = 0;

	while (j <= sp)
	{
		ft_putchar(' ');
		j++;
	}

	i = 0;
	while (i < count)
	{
		ft_putint(++i);
		j = 0;
		while (j <= (4 - ft_log10(i)))
		{
			ft_putchar(' ');
			j++;
		}
	}
}

void	ft_print_bottom_line(char *str, int longest_word)
{
	int	words;

	words = ft_count_words(str);

	ft_print_dash_row(words, longest_word);
	ft_print_num_row(words, longest_word);
}
