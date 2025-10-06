/*
 * [Program]: Reverse an Array
 * [Author]: Akriti Saroj
 * [Event]: Hacktoberfest 2025
 *
 * Description:
 *   This program takes an array of integers as input from the user,
 *   reverses the elements, and displays the reversed array.
 *
 * Compilation:
 *   gcc reverse_array.c -o reverse_array
 *
 * Execution:
 *   ./reverse_array
 */

#include <stdio.h>

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1, temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n[Hacktoberfest 2025] - Contributed by Akriti 💻✨\n");

    return 0;
}
