#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);//�������ƴ���ӡ�ַ��ĸ��� .5 ����printf()ֻ��ӡ5���ַ�
    printf("[%-24.5s]\n", BLURB);// -���ʹ���ı���������

    return 0;
}