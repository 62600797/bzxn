#include <stdio.h>
//ʹ�ñ�������ֶ�
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);//�������ʹ�õ��ֶο��   6
    printf("The number is :%*d:\n", width, number);//*���Կ�����Ҫ�����һ����
    printf("Now enter a width and aprecision:\n");
    scanf("%d %d", &width, &precision);//8 3
    printf("Weight = %*.*f\n", width, precision, weight);//һ��*��Ӧһ��Ҫ�������,����width����6,precision����8,weight����3
    printf("Done!\n");

    return 0;
}