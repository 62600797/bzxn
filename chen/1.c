#include <stdio.h>
int main(void)
{
    int Num = 0;
    scanf("%d",&Num);
    int arr[Num];
    for (int i = 0; i < Num; i++)
    {
        scanf("%d",&arr[i]);
    }
     int sum1 = 0, sum2 = 0;
    for (int i = 0; i < Num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum2 += arr[i];
        }
        else
        {
            sum1 += arr [i];
        }
    }
    printf("The sum of odd numbers is:%d\n",sum1);
    printf("The sum of even numbers is:%d",sum2);
    return 0;
}