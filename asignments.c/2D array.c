/*
author:seth
subject:2D array
*/
#include <stdio.h>


int main() {
    int i,j;
    int marks[2][3]={{40,56,73},{10,20,30,}};

     for (i=0;i<3;i++){
         for(j=0;j<3;j++){
         printf("marks[%d][%d]= %d\n",i,j,marks[i][j]);
         }

     }
         return 0;
}
