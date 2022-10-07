/* *********************************************************************** */
/* file: ft_reverse_str.c                                                  */
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
/* created: 2022/10/07 20:14.                                              */
/* updated: 2022/10/07 20:14.                                              */
/* *********************************************************************** */

#define MAXLINE 1000

void	ft_reverse_str(char *str[])
{
	char	line[MAXLINE];
	int		l;
	int		i;
	char	*s;

	s = *str;
	l = ft_strlen(s);
	i = 0;
	while (l > 0)
	{
		line[i++] = *(s + --l);
	}

	line[i++] = '\0';

	*str = line;
}
