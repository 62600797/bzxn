#include <stdio.h>
//���������е�ǰ��������
int main(void)
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);//����%*d��ʾ����������������
    printf("The last integer was %d\n", n);
    return 0;
}
//�ܽ�: printf() ʹ��%*d  �е�*��ʾ����һ�����������
//      scanf()  ʹ��%*d  �е�*��ʾ����������������