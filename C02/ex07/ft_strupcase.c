#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}/*int main()
{
	char first[] = "abcdefghijklmnopqrstuvwxyz";

	printf("before : %s\n",first);
	printf("after : %s\n", ft_strupcase(first));
}*/
