/* *********************************************************************** */
/* file: ft_putint.c                                                       */
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
/* created: 2022/10/07 20:00.                                              */
/* updated: 2022/10/07 20:00.                                              */
/* *********************************************************************** */

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

	ft_putchar(num + '0');
}
