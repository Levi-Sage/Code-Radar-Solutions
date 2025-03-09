// Your code here...
#include <stdio.h>  

int main() {  
    char operator;  
    int num1, num2, result;  

    // Displaying menu  
   
    scanf("%d", &num1);  
    scanf(" %c", &operator);  // Note the space before %c to catch any whitespace  

    printf("Enter second integer: ");  
    scanf("%d", &num2);  

    // Performing calculations based on the operator  
    switch (operator) {  
        case '+':  
            result = num1 + num2;  
            printf("%d", result);  
            break;  
        case '-':  
            result = num1 - num2;  
            printf( "%d", result);  
            break;  
        case '*':  
            result = num1 * num2;  
            printf("%d",result);  
            break;  
        case '/':  
            if (num2 != 0) {  
                result = num1 / num2;  
                printf("%d",result);  
            }  
    }  

    return 0;  
}  