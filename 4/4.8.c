#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;//const����

    printf("*%f*\n", RENT);    
    printf("*%e*\n", RENT);//ָ����ʽ��ʾ *3.852990e+003*
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);    
    printf("*%10.3f*\n", RENT);//�Ҷ���,ǰ���������ո�
    printf("*%10.3E*\n", RENT);//ָ����ʽ *3.853E+003*
    printf("*%+4.2f*\n", RENT);    
    printf("*%010.2f*\n", RENT);//%010.2f    *0003852.99*  %���0�Ǳ��,��0����������ֶ�Ҫ����,ֻ����0
        
    return 0;
}