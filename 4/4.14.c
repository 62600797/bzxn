#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print along string.\n");
    printf("Here's the newest way to print a "     "long string.\n");//pritf()中  如果两个字符串中间用空格 连接, 那么printf会把他们连接在一起 ANSI C 引入的字符串连接.编译器会看成一个字符
    return 0;
}