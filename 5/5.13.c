#include <stdio.h> 
int main(void)
{
    int count = 0, sum = 0;
    while (count++ < 20)//count ���������20��
    {
        sum += count;
    }
    printf("%d", sum);

    return 0;
}