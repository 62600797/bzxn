#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for (row = 0; row < ROWS; row++)//��������,���ﲻ��ʲô�����Ҫ�Ǵӵ� 0 �п�ʼ
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)//��һ���ֺſ�������ĸ,�ڶ����ֺſ��ƴ�ӡ�ļ��,��������ch����,��Ȼ��һֱѭ��
        {
            printf("%c",ch);
        }
        putchar('\n');
    }
    return 0;
}