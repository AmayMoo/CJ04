//#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
        int a;
        int b;

        a = 1;
        b = nb;

        if (power < 0)
                return(0);

        if(power == 0)
                return(1);

        while(a < power)
        {
                b = b * nb;
                a++;
        }
        return(b);
}

/*
int main(void)
{
        int nb;
        int power;

        nb = 5;
        power = 3;

        printf("%d\n", ft_iterative_power(nb, power));
}
*/
