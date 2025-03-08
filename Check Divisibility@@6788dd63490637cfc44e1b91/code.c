// Your code here...
#include <stdio.h>  

int main() {  
    int number; 
    scanf("%d", &number);   
    if (number % 5 == 0 && number % 11 == 0) {  
        printf("Divisible\n");  
    } else {  
        printf("Not Divisible\n");  
    }  

    return 0;  
}  