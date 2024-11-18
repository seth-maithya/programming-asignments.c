/*
author:seth
subject:3D array
*/
#include <stdio.h>


int main() {
    int i,j;
    int k;
    int marks[3][3]={{4,5,7},{1,2,3,},{4,3,2}};

     for (i=0;i<3;i++){
         for(j=0;j<3;j++){
             for(k=0;k<3;k++){

         printf("marks[%d][%d][%d]= %d\n",i,j,k,marks[i][j][k]);
          }
         }


     }
         return 0;
mumamazz


