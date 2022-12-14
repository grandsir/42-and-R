/* *********************************************************************** */
/* file: ft_h_histogram.c                                                  */
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
/* updated: 2022/10/06 16:46.                                              */
/* *********************************************************************** */

/* Usage without linker: cc ex01-13.c ft_print_dash_row.c utils.c ft_print_num_row.c */

#include "ft_histogram.h"

void	ft_h_histogram(char *str)
{
	int	wc;

	wc = ft_print_dash_row(str);
	ft_print_num_row(str, wc);
	ft_print_dash_row(str);
}

int	main(int argc, char	**argv)
{
	if (argc > 1)
	{
		ft_h_histogram(*(++argv));
	}
	ft_putchar('\n');
	return (0);
}
