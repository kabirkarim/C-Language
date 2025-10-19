#include<stdio.h>
int main(){
/* Method 1 By using 3 for loops 
  
    int n=5;
     for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
*/

// Method 2 By using 2 for loop and condition
int n=5, sp=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
              printf(sp >= j ? "  ":"* ");
        }
        sp--;
        printf("\n");
    } 

return 0;
}

/*
Output    
        *
      * *
    * * *
  * * * *
* * * * *
*/