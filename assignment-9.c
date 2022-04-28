#include<stdio.h>

int main(){

    int num;
    printf("Enter a value : ");
    scanf ("%d",&num);

    for (int row = 1; row <= num; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("%d ",colum);
        }
        printf("\n");
    }
    

    return 0 ;
}