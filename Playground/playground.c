/*  Ricky Smith
    Playground

*/

#include <stdio.h>

int main(void)
{

int theAnswer = 42;
float pi = 3.141592;
double posSqrtTwo = 1.41421356237;
char questionMark = 63;
char nickName[] = {"Makleford\0"};

fprintf(stdout, "The answer is %d. \n", theAnswer);
fprintf(stdout, "Pi is approximately equal to %f. \n", pi);
fprintf(stdout, "The square root of 2 is %f. \n", posSqrtTwo);
fprintf(stdout, "Who is %s%c \n", nickName, questionMark);
fprintf(stdout, "%s is. \n", nickName);


return 0;

}