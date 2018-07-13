/*  Ricky Smith
    Playground

*/

#include <stdio.h>

int main(void)
{

int time = 0;

printf("Please enter time in seconds.\n");

scanf("%d", &time);

int h = time / 3600;
int m = (time / 60) % 60;
int s = time % 60;

printf("Your time is:  %d:%d:%d\n", h, m, s);


return 0;

}