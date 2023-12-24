#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;//const变量

    printf("*%f*\n", RENT);    
    printf("*%e*\n", RENT);//指数形式表示 *3.852990e+003*
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);    
    printf("*%10.3f*\n", RENT);//右对齐,前边有两个空格
    printf("*%10.3E*\n", RENT);//指数形式 *3.853E+003*
    printf("*%+4.2f*\n", RENT);    
    printf("*%010.2f*\n", RENT);//%010.2f    *0003852.99*  %后边0是标记,用0填充以满足字段要求且,只能是0
        
    return 0;
}