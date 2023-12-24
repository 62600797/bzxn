#include <stdio.h>
#include <limits.h>//整形限制
#include <float.h>//浮点型限制
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int:%d\n", INT_MAX);//2147483647
    printf("Smallest long long: %lld\n", LONG_MIN); //2147483648
    printf("One byte = %d bits on this ststem.\n", CHAR_BIT);//6
    printf("Largest double: %e\n", DBL_MAX);//最大双精度 1.797693e+308
    printf("Smallest normal float: %e\n", FLT_MIN);//最小的正常浮点 1.175494e-038
    printf("float precision = %d digits\n", FLT_DIG);//浮点精度
    printf("float epsilon = %e\n",FLT_EPSILON);//浮动伊普西龙

    return 0;
}