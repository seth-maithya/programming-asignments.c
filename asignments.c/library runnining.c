// program to  perfomance in library
/*
Author :seth
date:24/10/24
*/
#include <stdio.h>
int main() {
    int Bookid;
    int Duedate;
    int Returndate;
    int Daysoverdue;
    int finedate;
    int fineamount;
    
    //promting the user to enter the values
    printf("Enter book id:");
    scanf("%d",&Bookid);
    printf("Enter Duedate:");
    scanf("%d",&Duedate);
    printf("Enter return date:");
    scanf("%d",&Returndate);
    Daysoverdue=(Returndate-Duedate);
    //determine fine dates
    if(Daysoverdue<=10)
     printf("No charges\n");
    else if(Daysoverdue<=14)
     printf("infine Rates=50");
    else
     printf("infinite Rates=ksh 60");
     
     //calculate fine amount
     finedate=(Daysoverdue*fineamount);
     printf("Bookid:%d\n",Bookid);
     printf("Duedate:%d\n",Duedate);
     printf("Returndate:%d\n",Returndate);
     printf("Daysoverdue:%d\n",Daysoverdue);
     printf("Fineamount:%d\n",fineamount);
     printf("Finedate:%d",finedate);
    return 0;
    
}