// Your code here...
#include <stdio.h>  

int main() {  
    char operator;  
    int num1, num2, result; 
   
    scanf("%d", &num1);  
    scanf(" %c", &operator);   
    scanf("%d", &num2);  
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