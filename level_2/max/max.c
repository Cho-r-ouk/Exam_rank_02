int		max(int* tab, unsigned int len)
{
	int i = 1;
	int m = tab[0];
	if (!tab)
		return (0);
	while(i < len)
	{
		if (m < tab[i])
			m = tab[i];
		i++;
	}
	return (m);
}

