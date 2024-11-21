#include <stdio.h>

int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (array[mid] == key) {
        return mid;
    }
    else if (array[mid] > key) {
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(array) / sizeof(array[0]);

    int key = 7;
    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("���ؼЭ� %d�A������ %d�C\n", key, result);
    }
    else {
        printf("�ؼЭ� %d ���b�}�C�����C\n", key);
    }

    return 0;
}
