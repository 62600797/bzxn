#include <stdio.h>
#define cash 555.55
int main(void)
{
    char name[40] = "NAME";
    printf("The %s family just may be $%2.f dollars richer!", name, cash);//如果%.s那么== %0.0s

    return 0;
}