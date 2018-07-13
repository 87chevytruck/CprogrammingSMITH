#include <stdio.h>

int main(void)
{

printf("%f", 1.2);                      //output:1.200000
printf("\n");
printf("%+8.4f", -1.798);               //output: -1.7980
printf("\n");
printf("% 7.2f", 0.987654321);          //output:   0.99
printf("\n");
printf("%-6.1f is yours", 13.37);       //output:13.4   is yours
printf("\n");
printf("Yours is %05.2f", 1.2345);      //output:Yours is 01.23
printf("\n");
printf("%s", "Hello World!\0");         //output:Hello World!
printf("\n");
printf("%4s", "Hello world!\0");        //output:Hello World!
printf("\n");
printf("%016.11s", "Hello world!\0");   //output:     Hello world
printf("\n\n\n\n");

return 0;

}