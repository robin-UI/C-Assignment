#include <stdio.h>

int main(){

    int num, temp;
    printf("Enter the limit : ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (i % 2 != 0)
        {
            temp = i + temp;

        }
        
    }
    printf("Your total is %d ",temp);
    
    return 0;
}