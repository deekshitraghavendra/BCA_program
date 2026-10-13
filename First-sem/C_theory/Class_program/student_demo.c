#include <stdio.h>
int rollno,subject1,subject2,subject3,subject4,subject5;
void getstudentdata(){
    printf("enter the rollno:");
    scanf("%d",&rollno);
    printf("Enter subject1 marks:");
    scanf("%d",&subject1);
    printf("Enter subject2 marks:");
    scanf("%d",&subject2);
    printf("Enter subject3 marks:");
    scanf("%d",&subject3);
    printf("Enter subject4 marks:");
    scanf("%d",&subject4);
    printf("Enter subject5 marks:");
    scanf("%d",&subject5);
 
}
int gettotal(){
    sum=maths_marks + eng_marks
    return sum;
}

float getaverage(){
    average=sum /2;
    return average; //return 'average' to main()
}


void displaystudentdetails(){
    printf("Roll No:%d",rollno);
}

int main(){
    //declaration
    //user defined functions
    getstudentsdata();
    gettotal();
    getAverage();
    getCGPA();
    Displaystudentdetails();
}