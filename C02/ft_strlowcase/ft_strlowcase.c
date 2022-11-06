#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}/*int main()
{
	char first[] = "AASSSDDFGGHJJ";

	printf("before : %s\n",first);
	printf("after : %s\n", ft_strlowcase(first));
}*/
