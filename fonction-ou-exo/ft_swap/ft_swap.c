#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/*
int main()
{
    int a;
    int b;

    a = 16;
    b = 90;
    ft_swap(&a, &b);
    printf("la valeur de a = %d,\n et la valeur de b = %d\n", a, b);
}
*/