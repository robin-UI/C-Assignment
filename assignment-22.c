#include <stdio.h>
 
    void getAraa(int, int[100][100], int[100][100]);
    void addArray(int, int[100][100], int[100][100], int[100][100]);
    void displayArry(int, int[100][100]);
 
int main()
{
 
    int size, Ara1[100][100];
    int Ara2[100][100];
    int newArr[100][100];
    printf("Enter size of afstAraay : ");
    scanf("%d", &size);
 
    getAraa(size, Ara1, Ara2);
    addArray(size, Ara1, Ara2, newArr);
    displayArry(size, newArr);
 
    return 0;
}

void getAraa(int siz, int fstAra[100][100], int scndAra[100][100])
{
 
    int i, j;
 
    for (i = 0; i < siz; i++)
    {
        for (j = 0; j < siz; j++)
        {
            printf("Enter first[%d][%d]: ", i, j);
            scanf("%d", &fstAra[i][j]);
        }
    }
 
    printf("Enter value of second array\n");
 
    for (int i = 0; i < siz; i++)
    {
        for (int j = 0; j < siz; j++)
        {
            printf("Enter second[%d][%d]: ", i, j);
            scanf("%d", &scndAra[i][j]);
        }
    }
}
 
void addArray(int siz, int fstAra[100][100], int scndAra[100][100], int newArr[100][100])
{
    for (int z = 0; z < siz; z++)
    {
        for (int m = 0; m < siz; m++)
        {
            newArr[z][m] = fstAra[z][m] + scndAra[z][m];
        }
    }
}
 
void displayArry(int size, int newArr[100][100])
{
    printf("Added values are :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d  ", newArr[i][j]);
        }
        printf("\n");
    }
}