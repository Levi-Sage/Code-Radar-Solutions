// Your code here...
#include <stdio.h>  

int main() {  
    int number; 
    scanf("%d", &number);   
    if (number % 5 == 0 && number % 3 == 0) {  
        printf("Divisible by Both\n");  
    } else if(number % 5==0 && number % 3!=0) {  
        printf("Divisible by 5\n");  
    }else if(number%5!=0 && number % 3==0){
        printf("Divisible by 3");
    }else{
        printf("Not Divisible");
    }

    return 0;  
}  