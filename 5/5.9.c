#include <stdio.h>
//将秒转化为分钟输出   主要种/ 和  % 实现
#define SEC_PER_MIN 60 // 一分钟60秒
int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter ther number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);//读取秒数
    while (sec > 0)
    {
    min = sec / SEC_PER_MIN;//截断分钟数
    left = sec % SEC_PER_MIN;//剩余秒数
    printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
    printf("Enter next value (<=0 to quit):\n");
    scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}