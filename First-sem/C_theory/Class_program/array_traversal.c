#include <stdio.h.>

int main(){
    int isvalid=1;
    int arraysize=0;
    while (isvalid=1)
    {
        int arraysize=read_array_size();
        int validated=validate_array_size(arraysize);
        if(validated==1){


            break;
        }
        printf("pls try again..");
    }
    int myarray:
    for (int i=0;i<=arraysize;i++){

    }
}

int read_array_size(){
    int size;
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
    if(size>4){
        printf("array size is not valid:");
        return 1;
    }
}
    
//reads array SIZE from KB
int read_array_size(){
    int size;
    printf("Enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    int size;
    if(array_size>4){
        return 1;
    }
    return 0;
}
