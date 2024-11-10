#include <stdio.h>
#include <unistd.h>

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while(str[i] != '\0') 
    {
        i++;
    }
    return (i);
}
/*
int main()
{
    char str[]="heyyyyyyyyyyyyyy";
    int len;
    len = ft_strlen(&str[0]);
    printf("la taille de votre phrase est de %d", len);
}
*/