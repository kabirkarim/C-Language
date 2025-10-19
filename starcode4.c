#include<stdio.h>
int main(){
    int n=5, s=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf(s >= j? "  " :" *");
        }
        s++;
        printf("\n");
    }

    /*Method 2
    n=5;
    for(int i=n; i>=1 ; i--){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        
        for(int j=i; j>=1; j--){
            printf("* ");
        }
        
        printf("\n");
    }
    */
     
return 0;
}

/*
Output    
* * * * *
  * * * *
    * * *
      * *
        *
*/