#include<stdio.h>
int main()
{
    int count, n=5, inc=1;
    int befspc=4, aftspace=6; 
    for(count=1; count<=9; count++){
        for(int a=1; a<=9; a++){
            if(a<=5)
            printf(befspc >=a ? "`":"#");
            else
            printf(aftspace <=a ? "`":"#");
        }
        printf("\n");
        if(n == 9){
            inc=-1;
        }
        n+=inc;
        befspc-=inc;
        aftspace+=inc;
    }
    return 0;
}





/*
OUTPUT
````#````
```###```
``#####``
`#######`
#########
`#######`
``#####``
```###```
````#````

*/