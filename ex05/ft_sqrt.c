//#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;

	while(i * i < nb)
	{
		i++;
	}

	if(i * i == nb)
	{
		return(i);
	}
	return(0);
}

/*
int main(void)
{
	printf("%d\n", ft_sqrt(25));
}
*/
