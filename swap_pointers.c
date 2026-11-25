#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  // Store the value pointed to by a
    *a = *b;        // Copy the value pointed to by b into a's location
    *b = temp;      // Copy the original value of a into b's location
}

int main(void) {
    int x = 10;
    int y = 25;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Pass the memory addresses of x and y
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
