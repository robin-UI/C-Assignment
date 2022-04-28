#include <stdio.h>

int main (){

    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size][size],i,j;
    int arr2[size][size],k,l;
    int newArr[size][size];


    printf("Enter first array values : \n");
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            printf("Enter first[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter Second array value : \n");
    for (k=0; k<size; k++)
    {
        for (l=0; l<size; l++)
        {
            printf("Enter second[%d][%d]: ",k,l);
            scanf("%d",&arr2[k][l]);
        }
    }


    for (int z = 0; z < size; z++)
    {
        for (int m = 0; m < size; m++)
        {
            newArr[z][m] = arr[z][m] + arr2[z][m];
        }
        
    }

    printf("Calculated values are \n");

    for (int nr = 0; nr < size; nr++)
    {
        for (int nc = 0; nc < size; nc++)
        {
            printf("%d  ", newArr[nr][nc]);
        }
        printf("\n");
    }

    return 0;
}








