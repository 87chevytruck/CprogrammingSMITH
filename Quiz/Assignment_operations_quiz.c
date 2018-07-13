#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Please enter interger for X \n");
    scanf("%d", &x);
    printf("Please enter interger for Y \n");
    scanf("%d", &y);

    printf("\nx *- y:  %d \n", x *- y);
    printf("x *= y:  %d \n", x *= y);
    printf("x /= y:  %d \n", x /= y);
    printf("x modulo= y:  %d \n", x %= y);
    printf("x += y:  %d \n", x += y);
    printf("x -= y:  %d \n", x -= y);
    printf("x *= ++y:  %d \n", x *= ++y);
    printf("x /= y--:  %d \n", x /= y--);
    printf("x mod= --x:  %d \n", x %= --x);
    printf("x += --y:  %d \n", x += --y);
    printf("x -= y++:  %d \n", x -= y++);
    printf("(y mod= y) || (x /= x--):  %d \n", (y %= y) || (x /= x--));


    return 0;

}