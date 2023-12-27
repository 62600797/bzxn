#include <stdio.h>
//输出c语言中的真值和假值
int main(void)
{

    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d \n", true_val, false_val);
    
    return 0;
}