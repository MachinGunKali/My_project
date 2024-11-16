#include <unistd.h>
#include <stdio.h>

void	ft_print_Alpha(void)
{
    char alpha;
    alpha = 'a'; // Start from the character '0'

    while (alpha <= 'z') // Loop until '9'
    {
        write(1, &alpha, 1); // Write the current digit
        alpha++; // Move to the next digit
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_Alpha();
}

