#include <stdio.h>
//printf �� ����ֵ
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);//���Ͽո� \n�� ��32��
    printf("The printf() function printed %d characters.\n", rv);//32  printf()���ش�ӡ�ַ��ĸ���
    //printf()�п���ʹ��\n�����л���,���ǲ���ͨ������Enter ���� Retuen ������ʵ�ʵĻ��з�
    return 0;
}