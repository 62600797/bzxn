#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for ( row = 0; row < ROWS; row++)//控制开头字母,这里不管什么情况都要是从第 0 行开始
    {
        for (ch = ('F' - row); ch > ('F' - CHARS); ch--)
        {
            printf("%c",ch);
        }
        putchar('\n');
    }
    
    return 0;
}