#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 65 || str[i] > 90)
			return 0;
		i++;
	}
	return 1;
}/*int main()
{
	char str[] = "ASDASDFS";
	printf("result: %d\n", ft_str_is_uppercase(str));
}*/
