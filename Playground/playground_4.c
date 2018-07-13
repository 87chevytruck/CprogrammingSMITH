#include <stdio.h>
#include <math.h>

int main()
{
    int loop = 1;
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;
    double holdA = 0;
    double holdB = 0;
    double holdC = 0;
    int choice = 0;

    while(loop = 1)
    {
        printf("Finding the missing side of a right triangle.\n1) I know the Length of the Hypotenuse\n2) I do not know the length of the Hypotenuse\n>>");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Please Enter the length of the Hypotenuse follwed by the length of the known side seperated by a space.\n>>");
            scanf("%lf %lf", &sideA, &sideB);
            if((sideA > 0) && (sideB > 0))
            {
                holdA = sideA * sideA;
                holdB = sideB * sideB;
                holdC = holdA - holdB;
                sideC = sqrtl(holdC);
                printf("The length of the Unknown side is %f\n", sideC);
                printf("If you would like to run the program again Press 1, if not Press 0\n>>");
                scanf("%d", &loop);
                if(loop == 0)
                {
                    break;
                }
                //break;
            }
            else
            {
                printf("Please Provide Correct input.\n");
                break;
            }

        }
        else if(choice == 2)
        {
            printf("Please Enter the length of the two known sides seperated by a space.\n>>");
            scanf("%lf %lf", &sideA, &sideB);
            if((sideA > 0) && (sideB > 0))
            {
               holdA = sideA * sideA;
                holdB = sideB * sideB;
                holdC = holdA + holdB;
                sideC = sqrtl(holdC);
                printf("The length of the Hypotenuse side is %f\n", sideC);
                printf("If you would like to run the program again Press 1, if not Press 0\n>>");
                scanf("%d", &loop);
                if(loop == 0)
                {
                    break;
                }
                //break; 
            }
            else
            {
                printf("please Provide Correct input.\n");
                break;
            }
            
        }
    }
    return 0;
}