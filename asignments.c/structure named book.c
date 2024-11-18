/*
author:seth
subject:structure named seth
*/
#include <stdio.h>
#include<string.h>
struct book{
    int publication;
    char author[30];
    char tittle[30];
    float price;
    char ISBN[13];
};
int main(){
    struct book B1;
    strcpy(B1.tittle,"Introduction to c programming");
    strcpy(B1.author,"john smith");
    B1.publication=2022;
    B1.price=49.99;
    strcpy(B1.ISBN,"9780131103627");
    printf("Book Tittle:%s\n",B1.tittle);
    printf("Author:%s\n",B1.author);
    printf("Publication year:%d\n",B1.publication);
    printf("Price:.%.2f\n",B1.price);
    printf("ISBN:%s\n",B1.ISBN);
    printf("Enter declared values:");
 return 0;   
}