int	max(int* tab, unsigned int len)
{
	int i = 0;
	int tmp = 0;
	while(i < len -1)
	{
		if(tab[i] > tab[i + 1])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		i++;
	}
	return (tab[len-1]);
}
