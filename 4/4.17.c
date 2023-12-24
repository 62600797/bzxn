#include <stdio.h>
//跳过输入中的前两个整数
int main(void)
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);//这里%*d表示的是跳过该输入项
    printf("The last integer was %d\n", n);
    return 0;
}
//总结: printf() 使用%*d  中的*表示的是一个待输入的数
//      scanf()  使用%*d  中的*表示的是跳过该输入项