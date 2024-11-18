// compound intrest
/*
author seth
24/5/2024
*/
#include <stdio.h>

int main() {
 int principal;
 float times;
 float rate;
 int amount;
 float ci;
 //prompt the user to enter
 printf("Enter Principle:");
 scanf("%d",&principal);
 printf("Enter time:");
 scanf("%f",&times);
 printf("Enter rate:");
 scanf("%f",&rate);
 //calculate total amount
 amount=principal*((1+rate/100)*times);
 ci=(amount-principal);
 printf("The compount intrest is:%f",ci);
 
    return 0;
}