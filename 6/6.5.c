#include <stdio.h> 
#include <math.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double respose;

    printf("What is the value of pi?\n");
    scanf("%lf", &respose);
    while (fabs(respose - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &respose);
    }
    printf("Close enough!\n");
    return 0;
}