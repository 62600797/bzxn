#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;//size_t 无符号整数类型  可以为unsigned int 或者 unsigned long 的别名

    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

    return 0;
}