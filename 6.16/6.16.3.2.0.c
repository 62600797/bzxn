#include <stdio.h>
int main(void)
{
    const int ROWS = 6;//��������
    const int CHARS = 6;//�����ĸ���ж�����ĸ
    int row;
    char ch;
    for (row = 0; row < ROWS; row++)//���ƿ�ͷ��ĸ,���ﲻ��ʲô�����Ҫ�Ǵӵ� 0 �п�ʼ
    {
        for (ch = ('F' - row); ch > ('F' - CHARS); ch--)//��һ���ֺſ�������ĸ,�ڶ����ֺſ��ƴ�ӡ�ļ��,��������ch����,��Ȼ��һֱѭ��
        {
            printf("%c",ch);
        }
       putchar('\n');
    }
    return 0;
}