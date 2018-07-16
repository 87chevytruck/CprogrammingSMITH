#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main(void)
{
    uint32_t num1 = 0;
    uint32_t tempNum1 = 0;

    printf("Input a positive number.  \n");

    scanf("%u", &num1);
    printf("Your number was:  %d (HEX:  0x%08X)  \n", num1, num1);

    tempNum1 = num1;
    num1 = num1 >> 4;
    tempNum1 = tempNum1 << (((sizeof(tempNum1)*8) - 4));
    num1 = num1 | tempNum1;

    printf("Your number now:  %u (Hex:  0x%08X)  \n", num1, num1);

    return 0;


}