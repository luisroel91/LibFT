#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*newstr;
	int		i;

	newstr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if(!newstr)
	{
		return (NULL);
	}
	while (len)
	{
		*newstr[i] = s[start];
		i++;
		len--;
	}
	newstr[i] = '\0';
	return (newstr);
}
