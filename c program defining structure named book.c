// c program to define structure  named book
#include <stdio.h>
#include<string.h>
//defination of the structure
struct book{
    char tittle[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};
int main(){
    //declaration and initialing of the structure
    struct book Mybook;
    
    strcpy(Mybook.tittle,"introduction to c programming");
    strcpy(Mybook.author,"john smith");
    Mybook.publication_year=2022;
    strcpy(Mybook.ISBN,"9780131103627");
    Mybook.price=49.99;
    
    //print the values of the fields
    printf("Book description:\n");
    printf("Tittle :%s\n",Mybook.tittle);
    printf("Author : %s\n",Mybook.author);
    printf("Publication Year :%d\n",Mybook.publication_year);
    printf("ISBN %\n",Mybook.ISBN);
    printf("price : %f\n",Mybook.price);
    
    //prompt the user to enter the declared 
    printf("\nEnter the following data for another book:\n");
    printf("Tittle:\n");
    
    printf("Author:\n");
    
    
    printf("publication _year:\n" );
    
    
    printf("ISBN:\n ");
    
    printf("price: ");

    //print user entered values
    printf("\nEntered book details:\n");
    printf("Tittle:%s \n",Mybook.tittle);
    printf("Author:%s \n",Mybook.author);
    printf("Publication_year: %d \n",Mybook.publication_year);
    printf("ISBN:%s\n",Mybook.ISBN);
    printf("Price:%.2f",Mybook.price);
    return 0;
}
    