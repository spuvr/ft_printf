#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int count = ft_printf("abc%");
    write(1, "\n", 1);
    int count1 = printf("abc%");
    write(1, "\n", 1);

    printf("\nft_printf: %d\n", count);
    printf("printf: %d\n", count1);

    return 0;
}