/* *********************************************************************** */
/* file: ft_pow.c                                                          */
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
/* created: 2022/10/10 12:42.                                              */
/* updated: 2022/10/10 12:43.                                              */
/* *********************************************************************** */

int	ft_pow(int base, int pow)
{
	int	c;
	int	val;

	val = 1;
	c = 0;

	while (c < pow)
	{
		val *= base;
		c++;
	}

	return (val);
}