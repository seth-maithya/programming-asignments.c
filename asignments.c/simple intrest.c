// program to  calculate simple intrest
/*
Author :seth
date:24/10/24
*/
#include <stdio.h>
int main() {
    double principal;
    double Time;
    double Rate;
    double intrest;
    
    printf("Enter the principal:");
    scanf("%d",&principal);
    printf("Enter time:");
    scanf("%f",&Time);
    printf("Enter rate:");
    scanf("%f",&Rate);
    printf("Enter intrest:");
    scanf("%f",&intrest);
    intrest=((principal*Rate*Time)/100);
    printf("intrest is:%f",intrest);
    return 0;
    
}