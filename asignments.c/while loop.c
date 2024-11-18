//while loop

#include <stdio.h>
int main(){
    int start;
    int stop;
    int i;

    printf("Enter a value to start:\n");
    scanf("%d",&start);
    printf ("Enter value to stop:\n");
    scanf("%d",&stop);
    while(start<=stop){
        printf("%d",start);
        i++;
    }
    
    return 0;
}