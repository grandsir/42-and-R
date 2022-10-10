/* *********************************************************************** */
/* file: ft_squeeze.c                                                      */
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
/* created: 2022/10/10 15:14.                                              */
/* updated: 2022/10/10 15:14.                                              */
/* *********************************************************************** */

void	ft_squeeze(char **s1, const char *s2)
{
	int		j;
	int		i;
	char	line[10000];
	char	*str;

	str = *s1;
	i = 0;
	while (*str)
	{
		j = 0;
		while (s2[j])
			if (s2[j++] == *str)
				str++;
		line[i++] = *(str++);
	}

	line[i++] = '\0';

	*s1 = line;
}
