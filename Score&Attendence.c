#include <stdio.h>
int main(){
    float score, atten;
    printf("Enter Your Score:");
    scanf("%f", &score);
    printf("Enter Your Attendence:");
    scanf("%f", &atten);

    if((score>=0 && score<=100) && (atten>=0 && atten<=100)){
        if(score>=90 && atten>=90){
            printf("Grade A");
        }
        else if(score>=80 && atten>=80){
            printf("Grade B");
        }
        else if(score>=70 && atten>=70){
            printf("Grade C");
        }
         else if(score>=60 && atten>=60){
            printf("Grade C");
        }
        else{
            printf("Grade F");
        }
    }
    else{
        printf("invalid Input");
    }

return 0;
}