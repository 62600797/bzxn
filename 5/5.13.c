#include <stdio.h> 
int main(void)
{
    int count = 0, sum = 0;
    while (count++ < 20)//count 连续相加了20次
    {
        sum += count;
    }
    printf("%d", sum);

    return 0;
}