// Your code here...
#include <stdio.h>  

int main() {  
    int number;   
    scanf("%d", &number);  
    if (number & 1) {  
        printf("%d", number);  
    } else {  
        printf("%d\n", number);  
    }  
    
    return 0;  
}  