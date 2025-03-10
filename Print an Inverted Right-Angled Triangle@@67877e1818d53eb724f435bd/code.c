#include <stdio.h>  

int main() {  
    int N;  
    scanf("%d", &N);  
    
    for (int i = N; i >= 1; i--) {  
        for (int j = 1; j <= i; j++) {  // Print stars for each row  
            printf("* "); // Print star and space  
        }  
        printf("\n"); // Move to the next line after each row  
    }  
    
    return 0;  
}  