#include <unistd.h>

void repeat_alpha(char *str) {
    int i = 0;

    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            int repeat_count = (str[i] | 32) - 'a' + 1;
            for (int j = 0; j < repeat_count; j++) {
                write(1, &str[i], 1);
            }
        } else {
            write(1, &str[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "\n", 1);
    } else {
        repeat_alpha(argv[1]);
    }
    return 0;
}
