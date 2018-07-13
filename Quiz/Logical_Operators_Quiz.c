#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Please enter interger for X \n");
    scanf("%d", &x);
    printf("Please enter interger for Y \n");
    scanf("%d", &y);

    printf("\ny && x:  %d \n", y && x);
    printf("y || x:  %d \n", y || x);
    printf("!y:  %d \n", !y);
    printf("y && 0:  %d \n", y && 0);
    printf("x || 42:  %d \n", x || 42);
    printf("!x:  %d \n", !x);
    printf("x && x:  %d \n", x && x);
    printf("y || y:  %d \n", y || y);
    printf("!1:  %d \n", !1);
    printf("1 && 1:  %d \n", 1 && 1);
    printf("(0 && 1) || (2 && 3):  %d \n", (0 && 1) || (2 && 3));


    return 0;

}