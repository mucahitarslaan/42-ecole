#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((src[i] !='\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}/*int main()
{
	char first[] = "first string";
	char second[] = "second string";
	int n;

	n = 3;
	printf("before : %s\n", second);
	printf("after : %s\n", ft_strncpy(first, second, n));
}*/
