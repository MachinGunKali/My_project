#include <stdio.h>
#include <unistd.h>

int fizzbuzz()
{
    int nb;
    nb = 1;
    while (nb <= 100)
    {
        if ((nb % 3 == 0) && (nb % 5 == 0))
        {
            //ft_putchar_fizzbuzz("fizzbuzz");
            write(1, "fizzbuzz", 8);
            nb = nb + 1;
            write(1, "\n", 1);
        }
    
        else if (nb % 3 == 0)
        {   
           //ft_putchar_fizz("fizz");
            write(1, "fizz", 4);
           nb = nb + 1;
            write(1, "\n", 1);
        }
        else if (nb % 5 == 0)
        {
            //ft_putchar_buzz("buzz");
            write(1, "buzz", 4);
            nb = nb + 1;
            write(1, "\n", 1);
        }
        
        else
        {
        printf("%d\n", nb);
        //write(1, "\n", 1);
        
        nb = nb + 1;
        }
    }
    return 0;
    
}

int main()
{
    fizzbuzz();
}