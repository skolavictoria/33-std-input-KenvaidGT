#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: No arguments to reverse.\n");
        return 1;
    }
    for (int i = argc - 1; i > 0; i--) {
        printf("%s%s", argv[i], i == 1 ? "\n" : " ");
    }
    return 0;
}