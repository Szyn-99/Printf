#include <stdio.h>
#include <unistd.h>
#include "declarations.h"
// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
// int ft_putnbr(int ss)
// {
//     int count = 0;
//     long long n = ss;
//     if(n < 0)
//     {
//         ft_putchar('-');
//         n = -n;
//         count++;
//     }
//     if(n >= 10)
//     {
//         count += ft_putnbr(n/10);

//     }
//     ft_putchar((n % 10) + '0');
//     count++;
//     return count;
// }
// diuxX
int main ()
{
    int a;
    a = ft_printf("%s\n", "1337");
    printf("%d\n", a);
    ft_printf("%d\n", a);
}