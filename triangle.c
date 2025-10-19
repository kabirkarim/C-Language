#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter 1st angle:\n");
    scanf("%f",&a);
    printf("Enter 2nd angle:\n");
    scanf("%f",&a);
    printf("Enter 3rd angle:\n");
    scanf("%f",&a);
    
    int sum=a+b+c;
    if(sum==180){
        if (a==b==c)
        {   
            printf("Equilateral Triangle");
        }
        else if(a==b||b==c)
        {
            printf("Isosceles Triangle");
        }
        else if(a==90 || b==90|| c==90)
        {
            printf("Right Triangle");
        }
        else 
        {
            printf("Scalene Triangle");
        }
    }
    else {
        print("Not a Triangle");
    }

    return 0;
}