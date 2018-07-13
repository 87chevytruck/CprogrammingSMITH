#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Please enter interger for X \n");
    scanf("%d", &x);
    printf("Please enter interger for Y \n");
    scanf("%d", &y);

    printf("\ny < x:  %d \n", y < x);
    printf("y <= x:  %d \n", y <= x);
    printf("y > x:  %d \n", y > x);
    printf("y >= x:  %d \n", y >= x);
    printf("y == x:  %d \n", y == x);
    printf("y != x:  %d \n", y != x);
    printf("2 == x:  %d \n", 2 == x);
    printf("6 != x:  %d \n", 6 != x);
    printf("6 >= 2:  %d \n", 6 >= 2);
    printf("2 < 6:  %d \n", 2 < 6);
    printf("x != y != 3 >= x:  %d \n", x != y != 3 >= x);


    return 0;

}