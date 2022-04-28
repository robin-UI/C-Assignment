#include<stdio.h> 

void getArry(int arry[], int size){

    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);
    }
}

void display(int arry[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arry[i]);
    }
}

int main(){ 

    int size;
    printf("Enter size of arry : ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter value of arry : ");
    getArry(arr, size);

    display(arr, size);
 
    return 0;
}

