/*  Ricky Smith
    Playground

*/

#include <stdio.h>

int main(void)
{

char joke [20] = {0};

printf("Knock Knock\n\n");

scanf("%20[32-126]s", &joke);

printf("\n%s\n", joke);

if (joke == "whosthere")

{
    printf("\nsuccess\n");
    
}

else (printf("\neppic fail"));

return 0;

}