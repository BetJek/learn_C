#include <stdio.h>
#include "utils.h"

void getnum();
int main()
{
    getnum();
    return 0;
}
void getnum()
{
    int num;
    char again;
    printf("Enter an integer to be squared: ");
    scanf("%d", &num);
    printf("%d squared is %d\n", num, square(num));
    printf("Square another number? y or n: ");
    scanf("%ls", &again);
    if((again=='Y')||(again=='y')) getnum();
    else return;
}
