/* *********************************************************************** */
/* file: ft_print_num_row.c										           */
/* created by: GrandSir													   */
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
/* created:	2022/10/06 12:04.											   */
/* updated:	2022/10/06 12:04.											   */
/* *********************************************************************** */


#include "ft_histogram.h"
#define MAXBUF 1000

void	ft_init_var(int *var)
{
	var[0] = 0;
	var[1] = 0;
	var[2] = 0;
}

int	ft_init_len_arr(char *str, int **arr)
{
	int	var[3];
	int	len_arr[MAXBUF];

	ft_init_var(var);
	while (*str)
	{
		if ((*str == ' ') || (*str == '\n') || !*(str + 1))
		{
			len_arr[var[0]++] = var[1];
			if (var[1] > var[2])
			{
				var[2] = var[1];
			}
			var[1] = 0;
		}
		else
		{
			var[1]++;
		}
		++str;
	}
	len_arr[var[0]] = '\0';
	*arr = len_arr;

	return (var[2]);
}


void	ft_print_row(int *arr, int i)
{
	while (*arr)
	{
		if (*arr >= i)
		{
			ft_putline("▇▇▇");
		}
		else
		{
			ft_putline("   ");
		}
		ft_putline("   ");

		arr++;
	}
}

void	ft_print_rows(int *arr, int l_word)
{
	int	sp;
	int	j;
	int	i;

	i = l_word;
	while (i > 0)
	{
		sp = ft_log10(l_word) - ft_log10(i);
		j = 0;
		while (j <= sp)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putint(i);
		ft_putchar(' ');
		ft_putchar('|');
		ft_putline("  ");
		ft_print_row(arr, i--);
		ft_putchar('\n');

	}
}

int	ft_print_chart(char *str)
{
	int	*arr;
	int	longest_word;

	longest_word = ft_init_len_arr(str, &arr);

	ft_print_rows(arr, longest_word);

	return (longest_word);
}
