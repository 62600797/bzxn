#include <stdio.h>
int max(int* a, int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    return (*a > *b ? *a : *b);
}
int main(void)
{
    int (*p)(int*, int*);
    p = max;
    int a, b;
    scanf("%d%d", &a, &b);
    (*p)(&a,&b);
    return 0;
}