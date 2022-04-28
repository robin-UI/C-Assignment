#include <stdio.h>

int main(){

    float totalMark;
    printf("Enter Total mark : ");
    scanf("%f",&totalMark);

    if (totalMark > 90)
    {
        printf("The program");
    }else if (totalMark > 80)
    {
        printf("Your grade is B");
    }else if (totalMark > 70)
    {
        printf("Your grade is C");
    }else if (totalMark > 60)
    {
        printf("Your grade is D");
    }else if (totalMark > 50)
    {
        printf("E");
    }else{
        printf("Fail");
    }


    return 0;
}