#include "declarations.h"
#include <stdio.h>

int main()
{
    int a = ft_printf("%X", (void *)200);
    printf("\n");
    int b = printf("%X", (void *)200);
    printf("\n");

    ft_printf("diali %d\ndialhom %d", a, b);
}