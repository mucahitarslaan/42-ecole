int	ft_isprint(int i)
{
	if ((i < 32) || (i > 126))
		return (0);
	return (1);
}
