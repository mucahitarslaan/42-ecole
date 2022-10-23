#include <unistd.h>

int check_doubles(char **str, char first, int index)
{
	int i;
	
	i = 0;
	while(i < index)
	{
		if(str[1][i] == first)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	int i;
	int k;
	
	if(ac == 3)
	{
	i = 0;
	while(av[1][i] != '\0')
	{	
		k = 0;
		while(av[2][k] != '\0')
		{
			if(av[1][i] == av[1][k])
			{
				if(check_doubles(av, av[1][i], i) == 1)
				{
					write(1, &av[1][i] ,1);
					break;
				}
			}
			k++;	
		}
		i++;
	}
	}
	write(1,"\n",1);
	return 0;
}
