#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2) {
        int i = 0;
        
        // Find the length of the string
        while (argv[1][i] != '\0') {
            i++;
        }

        // Print the string in reverse
        while (i > 0) {
            i--;
            write(1, &argv[1][i], 1);
        }
    }
    
    // Print a newline at the end
    write(1, "\n", 1);
    return 0;
}
