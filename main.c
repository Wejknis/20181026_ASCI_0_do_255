#include <stdio.h>

int main() {
    int i = 255;
    while (i){

        printf("wartość całkowita: %d,\t kod ASCII %c\n", i, i);
        --i;
    }

    return 0;
}