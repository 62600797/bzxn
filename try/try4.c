#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        for (char j = 'A'; j <= 'J'; j++)
        {
            printf("%c", j);
        }
        putchar('\n');
    }
    return 0;
}