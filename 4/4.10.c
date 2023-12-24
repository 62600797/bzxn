#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);//精度限制待打印字符的个数 .5 告诉printf()只打印5个字符
    printf("[%-24.5s]\n", BLURB);// -标记使得文本左对齐输出

    return 0;
}