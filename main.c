#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_putnbr(int ss)
{
    int count = 0;
    long long n = ss;
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
        count++;
    }
    if(n >= 10)
    {
        count += ft_putnbr(n/10);

    }
    ft_putchar((n % 10) + '0');
    count++;
    return count;
}

int main ()
{
    // int a  = printf("%d\n123\n", "123");
    // printf("total = %d", a);
    int a = ft_putnbr(55555);
    printf(" dyalek %d\n", a);
    int z = printf("%d", 55555);
    printf(" dialhom %d", z);
    // printf("\n");
    // int z = printf("%d\n", a);
    // printf("%d\n", z);
}