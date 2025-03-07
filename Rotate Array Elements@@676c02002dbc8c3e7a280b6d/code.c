// Your code here...
#include <stdio.h>  

void rotateArray(int arr[], int n, int k) {  
    k = k % n; // In case k is greater than n  
    int temp[k];  
    
    // Store the last k elements  
    for (int i = 0; i < k; i++) {  
        temp[i] = arr[n - k + i];  
    }  
    
    // Shift the rest of the array  
    for (int i = n - 1; i >= k; i--) {  
        arr[i] = arr[i - k];  
    }  
    
    // Place the k elements at the beginning  
    for (int i = 0; i < k; i++) {  
        arr[i] = temp[i];  
    }  
}  

int main() {  
    int arr[] = {1, 2, 3, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int k = 2; // Number of rotations  
    rotateArray(arr, n, k);  
    
    for (int i = 0; i < n; i++) {  
        printf("%d /n", arr[i]);  
    }  
    return 0;  
}  