//#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int resultat;
	int a;

	a = 1;
	resultat = 1;
	if (nb < 0)
	{
		a = -1;
		resultat = -1;

		while(a >= nb)
		{
			resultat = resultat != 0 ? resultat * a : -1;
			a--;
		}
		return resultat;
	}
	if(nb < 0)
	{	
		resultat = (resultat * -a);
		a++;
	}
	

	if(nb == 0)
		return(0);

	while(a <= nb)
	{
		resultat = resultat != 0 ? resultat * a : 1;
		a++;
	}
	return (resultat);
}

/*
int main(void)
{
	printf("%d\n", ft_iterative_factorial(149));

}
*/
