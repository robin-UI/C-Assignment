#include<stdio.h> 
#include<string.h>

int main(){ 

    char name[20];
    int len, temp=0;

    printf("Enter a string : ");
    scanf("%s", name);
    len = strlen(name);

    for(int i=0;i < len ;i++){
        if(name[i] != name[len-i-1]){
            temp = 1;
        break;
   }
}
    
    if (temp==0) {
        printf("String is a palindrome");
    }    
    else {
        printf("String is not a palindrome");
    }
    

 
    return 0;
}