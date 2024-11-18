/*
author:seth
subject:structure named seth
*/
#include <stdio.h>
#include<stdlib.h>


int main(){
    
    FILE*fptr;
     fptr=fopen("c:/user/seth/desktop/programming/data.txt","r");
     if(fptr==NULL){
         printf("Error opening the file\n");
         exit(1);
     }
     char sentence [100];
     fgets(sentence,100,fptr);
     printf("%s",sentence);
     fgets(sentence,sizeof(sentence),stdin);
     printf("%s",sentence);
     fclose(fptr);
    printf("Enter second line");
    
     
     return 0;
}