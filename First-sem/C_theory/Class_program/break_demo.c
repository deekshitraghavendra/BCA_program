#include <stdio.h>
int main(){
    for(int j=0;j<=2;j++){
        printf("Loop started\n");
        for(int i=0;i<5;i++){
            printf("Inner loop started\n");
            break;
            printf("from inner loop\n");

        }
        printf("from outer loop");
        break;
   }
   printf("program terminated..");
}