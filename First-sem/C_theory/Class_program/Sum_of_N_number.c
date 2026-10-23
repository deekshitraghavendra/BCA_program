#include <stdio.h>
int main(){
    int number;
    int sum;
    printf("enter the number:");
    scanf("%d",&number);

    printf("enter the sum:");
    scanf("%d",&sum);
    
    if (number >=5 &&  number<=10){
        printf( "valid ");
    }
    else{
        printf("invalid");
    }
}