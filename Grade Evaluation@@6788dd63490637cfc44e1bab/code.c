// Your code here...
#include<stdio.h>
int main(){
    char grade;
    switch(grade){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
        break;
    }
}