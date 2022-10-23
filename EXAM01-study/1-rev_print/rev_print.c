#include <unistd.h>
#include <stdio.h>

char *fv_rev_print(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	
	while(i >= 0)
	{
		write(1, &str[i],1);
		i--;	
	}
	write(1,"\n",1);
	
}
int main()
{
	char str1[] = "merhaba";
	printf("before : %s\n", str1);
	printf("after : %s\n", fv_rev_print(str1));
}
