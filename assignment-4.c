#include <stdio.h>

int main(){

    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark< 50)
    {
        printf("Your are fail \n");
    }
    else{
        printf("You are pass\n");
    }
    
    
    return 0;
}