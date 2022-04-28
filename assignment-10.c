#include<stdio.h> 

int main(){ 

    int size;


    printf("Enter size the two of array : ");
    scanf("%d",&size);
    int arr1[size], arr2[size], swap[size];

    printf("Enter first array vale : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter Second array vale : ");
    for(int j = 0; j< size; j++){
        scanf("%d",&arr2[j]);
    }




    printf("Array before Swaping :\n");
    for(int i = 0; i< size; i++){
        printf("%d ",arr1[i]);
    }

    printf("\n");

    for(int j = 0; j< size; j++){
        printf("%d ",arr2[j]);
    }


    printf("\nArray after swap : \n");

    for (int k = 0; k < size; k++)
    {
        swap[k] = arr1[k];
        arr1[k] = arr2[k];
        arr2[k] = swap[k];

    }

    for(int i = 0; i< size; i++){
        printf("%d ",arr1[i]);
    }

    printf("\n");

    for(int j = 0; j< size; j++){
        printf("%d ",arr2[j]);
    }
    
    printf("\n %d", size);
    printf("\n %d", size);

    return 0;
}