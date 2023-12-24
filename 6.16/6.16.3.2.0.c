#include <stdio.h>
int main(void)
{
    const int ROWS = 6;//控制行数
    const int CHARS = 6;//最多字母行有多少字母
    int row;
    char ch;
    for (row = 0; row < ROWS; row++)//控制开头字母,这里不管什么情况都要是从第 0 行开始
    {
        for (ch = ('F' - row); ch > ('F' - CHARS); ch--)//第一个分号控制首字母,第二个分号控制打印的间隔,第三个让ch递增,不然会一直循环
        {
            printf("%c",ch);
        }
       putchar('\n');
    }
    return 0;
}