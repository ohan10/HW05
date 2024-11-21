#include <stdio.h>

int recursiveMaximum(int array[], int size) {
    if (size == 1) {
        return array[0];
    }

    int max = recursiveMaximum(array, size - 1);

    return (array[size - 1] > max) ? array[size - 1] : max;
}

int main() {
    int array[] = { 3, 1, 4, 1, 5, 9, 2, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("陣列中最大值為: %d\n", recursiveMaximum(array, size));
    return 0;
}
