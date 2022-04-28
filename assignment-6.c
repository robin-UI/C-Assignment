#include <stdio.h>

int main(){

    int num;
    printf("Enter any number from 1 to 7 to display weak days : ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Today is Monday");
        break;
    
    case 2:
        printf("Today is Tuesday");
        break;
    
    case 3:
        printf("Today is Wednsday");
        break;
    
    case 4:
        printf("Today is Thirsday");
        break;
    
    case 5:
        printf("Today is Friday");
        break;
    
    case 6:
        printf("Today is Saturday");
        break;
    
    case 7:
        printf("Today is Sunday");
        break;
    
    default:
        printf("Enter any valid number");
        break;
    }

    return 0;
}