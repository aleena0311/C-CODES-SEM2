#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Elements of the array are:\n");

    for(i = 0; i < 5; i++) {
        printf("Element at index %d is %d\n", i, numbers[i]);
    }

    return 0;
}
