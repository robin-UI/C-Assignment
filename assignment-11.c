#include<stdio.h>

int main(){

    int size;
    int temp = 0;

    printf("Enter size of array : ");
    scanf("%d", &size);
    int arry[size];

    printf("Enter a value of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);

        if (arry[i] % 2 == 0)
        {
            temp++ ;
        }
        
    }

    printf("The number of even numbers are %d",temp);

    return 0;

}