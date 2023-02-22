#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	if(i * i == nb)
		return(i);

	if(i * i < nb)
		return(0);
}

int main(void)
{
	printf("%d\n", ft_sqrt(9));
}
