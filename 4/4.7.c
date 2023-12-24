#include <stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n", PAGES);//*959*
    printf("*%2d*\n", PAGES);//*959* 
    printf("*%10d*\n", PAGES);//*       959*
    printf("*%-10d*\n", PAGES);//*959       *
    printf("*% d*\n", -41);//*-41*
    
    return 0;
}