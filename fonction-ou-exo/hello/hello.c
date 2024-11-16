#include <unistd.h>
#include <stdio.h>

void ft_putchar()
{
    write(1, "Hello World!", 12);
    write(1, "\n", 1);
}

int main()
{
    ft_putchar();
}