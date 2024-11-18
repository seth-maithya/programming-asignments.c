// bank loan
#include <stdio.h>

int main() {
    int income ;
    int age;
    printf ("Enter age:");
    scanf ("%d",&age);
    printf ("Enter income:");
    scanf("%d",&income);
    if(age>=18&&income>=20000)
     printf ("good to borrow money");
    else
    printf("still child ");

    return 0;
}