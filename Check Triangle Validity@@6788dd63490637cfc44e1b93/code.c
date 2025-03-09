// Your code here...
#include <stdio.h>  

int isValidTriangle(float side1, float side2, float side3) {  
    return (side1 + side2 > side3) &&   
           (side1 + side3 > side2) &&   
           (side2 + side3 > side1);  
}  

int main() {  
    float side1, side2, side3;  
    printf("Side 1: ");  
    scanf("%f", &side1);  
    printf("Side 2: ");  
    scanf("%f", &side2);  
    printf("Side 3: ");  
    scanf("%f", &side3);  
 
    if (isValidTriangle(side1, side2, side3)) {  
        printf("Valid");  
    } else {  
        printf("Invalid");  
    }  

    return 0;  
}  