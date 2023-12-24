#include <stdio.h>
//printf 的 返回值
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);//算上空格 \n等 共32个
    printf("The printf() function printed %d characters.\n", rv);//32  printf()返回打印字符的个数
    //printf()中可以使用\n来进行换行,但是不能通过按下Enter 或者 Retuen 键产生实际的换行符
    return 0;
}