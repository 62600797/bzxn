#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    // int status;

    printf("Please enter an intefer to be summesd ");
    printf("(q to quit):");//�������һ����ĸ�Ϳ����˳�
    // status = scanf("%ld", &num);//�Ƿ��ȡ�ɹ� ������scanf�ķ���ֵ����ѭ������
    while (scanf("%d", &num) == 1)//�������ַ�,scanf�Ͷ�ȡʧ��,ѭ���ͻ��˳�
    {//ѭ���������޸�  (ȫ��Ϊ  ��ͷ//)
        sum += num;
        printf("Please enter next integer (q to quit): ");
        // status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    
    return 0;
}