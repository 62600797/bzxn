#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."//����ʱ�滻����ʾ������
int main(void)
{
    char name[40];
    printf("What's your name\n");
    scanf("%s",name);//�������Angela Plains ��ֻ��ȡ ǰһ������Ϊscanf��ȡ���ո�ʱ��ͽ�ֹ��
    printf("Hello,%s.  %s\n",name ,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);//11  40 sizeof (name)��ȫ������Ŀռ�
    printf("The phrase of praise has %zd letters ",strlen(PRAISE));//31 
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);//32   ���⣬sizeof PRAISE ����û���ã��� ������������ͻ����ض��� �� ���ͱ����ã�����: sizeof(int);

    return 0;
}