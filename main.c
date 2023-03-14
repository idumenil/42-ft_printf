#include <stdio.h>
#include <stdlib.h>

#include "ft_printf.h"

int main()
{
    int res_1 = ft_printf("Hello\n");
    int res_2 = printf("Hello\n");
    ft_printf("%d\n", res_1);
    printf("%d\n", res_2);
    printf("\n");

    int res_3 = ft_printf("Hello %s !\n", "World");
    int res_4 = printf("Hello %s !\n", "World");
    ft_printf("%d\n", res_3);
    printf("%d\n", res_4);
    printf("\n");

    int res_5 = ft_printf("ecole %d\n", 42);
    int res_6 = printf("ecole %d\n", 42);
    ft_printf("%d\n", res_5);
    printf("%d\n", res_6);
    printf("\n");

    int res_7 = ft_printf("%%\n");
    int res_8 = printf("%%\n");
    ft_printf("%d\n", res_7);
    printf("%d\n", res_8);
    printf("\n");

    int res_9 = ft_printf("test nombre non signe : %u\n", 456);
    int res_10 = printf("test nombre non signe : %u\n", 456);
    ft_printf("%d\n", res_9);
    printf("%d\n", res_10);
    printf("\n");

    int res_11 = ft_printf("test nombre hexa x : %x\n", 13);
    int res_12 = printf("test nombre hexa x : %x\n", 13);
    ft_printf("%d\n", res_11);
    printf("%d\n", res_12);
    printf("\n");

    int res_13 = ft_printf("test nombre hexa X : %X\n", 13);
    int res_14 = printf("test nombre hexa X : %X\n", 13);
    ft_printf("%d\n", res_13);
    printf("%d\n", res_14);
    printf("\n");

    int res_15 = ft_printf("test pointeur : %p\n", 0x12345678);
    int res_16 = printf("test pointeur : %p\n", 0x12345678);
    ft_printf("%d\n", res_15);
    printf("%d\n", res_16);
    printf("\n");
}
