//#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return(0);

	if(power == 0)
		return(1);

	if(power > 0)
	{
		return(nb * ft_recursive_power(nb, power - 1));
	}
	return(nb);
}

/*
int main(void)
{
	int nb;
	int power;
	
	nb = 5;
	power = 3;

	printf("%d\n", ft_recursive_power(nb, power));
}
*/
