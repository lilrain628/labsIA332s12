#include <stdio.h>
#include <stdlib.h>

int sumOfNegativeEven(int* arr, int size, int index) {
    if (index == size) {
        return 0;
    }  
    int currentNumber = arr[index];
    if (currentNumber < 0 && currentNumber % 2 == 0) {
        return currentNumber + sumOfNegativeEven(arr, size, index + 1);
    } else {
        return sumOfNegativeEven(arr, size, index + 1);
    }
}
int main() {
    int size;
    scanf("%d", &size); // size mass 
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < size; i++) { //elements mass
        scanf("%d", &arr[i]);
    }
    int result = sumOfNegativeEven(arr, size, 0);
    printf("Сумма отрицательных четных чисел в массиве%d\n", result);
    free(arr);
    return 0;
}