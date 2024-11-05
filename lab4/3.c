#include <stdio.h>

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int temp;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nArray:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
