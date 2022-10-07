/* *********************************************************************** */
/* file: ft_rstrip.c                                                      */
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
/* created: 2022/10/07 20:11.                                              */
/* updated: 2022/10/07 20:11.                                              */
/* *********************************************************************** */

#define MAXLINE 1000

void	ft_rstrip(char *str)
{
	char	line[MAXLINE];
	int		s;
	int		l;

	while (*str)
	{
		l = ft_getline(line, &str);
		s = l;
		while (line[s] == ' ' || line[s] == '\t' || !line[s])
		{
			s--;
		}
		if (s != 0)
		{
			s++;
		}
		line[s] = '\0';
	}
}
