#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for ( row = 0; row < ROWS; row++)//���ƿ�ͷ��ĸ,���ﲻ��ʲô�����Ҫ�Ǵӵ� 0 �п�ʼ
    {
        for (ch = ('F' - row); ch > ('F' - CHARS); ch--)
        {
            printf("%c",ch);
        }
        putchar('\n');
    }
    
    return 0;
}