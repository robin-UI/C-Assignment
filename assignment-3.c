#include <stdio.h>

int main(){

    int p;
    float r, n, si;
    printf("Enter Principal amount: ");
    scanf("%d",&p);

    printf("Enter Interest rate : ");
    scanf("%f",&r);

    printf("Enter Number of years : ");
    scanf("%f",&n);


    si = (p * r* n)/ 100;

    printf("The simple  intrest is %f \n", si);

    return 0;
}