// Your code here...
#include <stdio.h>  

int main() {  
    int num, i, isPrime = 1;
    scanf("%d", &num);  

    // Check if number is less than 2  
    if (num < 2) {  
        isPrime = 0; // Numbers less than 2 are not prime  
    } else {  
        // Loop to check for factors  
        for (i = 2; i <= num / 2; i++) {  
            if (num % i == 0) {  
                isPrime = 0; // Found a factor, not prime  
                break;       // Exit the loop  
            }  
        }  
    }  

    // Output results  
    if (isPrime) {  
        printf("Prime");  
    } else {  
        printf("Not Prime");  
    }  

    return 0;  
}  