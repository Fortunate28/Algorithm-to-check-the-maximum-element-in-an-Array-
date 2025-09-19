#include <stdio.h>

int main() {
    
    int arr[] = {12, 45, 7, 23, 56, 89, 34, 2, 67};
// Calculate size of the array
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    //Assume the first element is the maximum
    int max = arr[0];
   
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("This program finds the maximum element in an array\n");

    printf("The maximum element in the array is: %d\n", max);
    
    return 0;
}