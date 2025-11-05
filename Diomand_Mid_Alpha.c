#include <stdio.h>
int main() {
   int count,n=5, space=4, inc=1; 
//    int total = 9;
   char mid='V', ch;
   int level=0; 
   for(count=1;count<=9;count++){
    ch=mid-level;
    for(int a=1; a<=n; a++){
       if(a>space){
        printf("%c", ch++);
       }
       else{
        printf(" ");
       }
    }
    if(count==5)
    inc=-1;
    n+=inc;
    level+=inc;
    space-=inc;
    printf("\n");
   }
    
    return 0;
}
/*
OutPut

    V 
   UVW
  TUVWX
 STUVWXY
RSTUVWXYZ
 STUVWXY
  TUVWX
   UVW
    V

*/