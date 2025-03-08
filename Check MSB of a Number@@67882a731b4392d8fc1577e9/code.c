// Your code here...
#include <stdio.h>  

int main() {  
    int number;  
    int msb;  
    scanf("%d", &number);  
    msb = sizeof(number) * 8 - 1;   
    int temp = number;  
    while (temp != 0) {  
        temp >>= 1; // Shift right  
        msb--; // Decrement the MSB position  
    }  

    
    if (msb < 0) {  
        printf("Set");  
    } else {  
        printf("Not Set");  
    }  

    return 0;  
}  