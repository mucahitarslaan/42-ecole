#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}/*
int main()
{
	char first[] = "second string";
	char second[] = "string copy";
	char *result;

	result = ft_strcpy(first,second);

	printf("second :%s\n", second);
	printf("first :%s\n", result);
}*/
