#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*newstr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (!newstr)
	{
		return (NULL);
	}
	while (s1)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2)
	{
		newstr[i + len1] = s2[i];
		i++;
	}
	newstr[i + len1] = '\0';
	return (newstr);
}
