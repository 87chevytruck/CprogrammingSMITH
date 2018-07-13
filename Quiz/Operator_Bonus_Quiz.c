/*
Ricky Smith
Operator Bonus Quiz

//////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
int y = 4;
1 + 2 * (3 + y) + 5;        // Result 20

//////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
int x = 2; y = 6;
x != y != 3 >= x;          // Result 0

//////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
x = 9; y = 3;
(y %= y) || (x /= x--);    // Result 0

// What would be a better way of writing these?
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 4;
    printf("Operation 1 + (2 * (3 + a)) + 5 has a result of:  %d\n", 1 + (2 * (3 + a)) + 5);

    int b = 2; 
    int c = 6;
    printf("Operation (((b != c) != 3) >= b) has a result of:  %d\n", (((b != c) != 3) >= b));

    int d = 9; 
    int e = 3;
    printf("Operation (e mod e) || (d / d--) has a result of:  %d\n", (e%e) || (d / d--));

    return 0;
    
}