#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	int c;
	char *res;

	c = 0;
	res =(char*)(malloc)(sizeof(char) * (i+1));
	if(res == NULL)
	{
		return 0;
	}
	while(src[c] != '\0')
	{
		res[c] = src[c];
		c++;
	}	
	res[c] = '\0';
	return res;
}
