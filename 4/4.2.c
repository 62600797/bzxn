#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."//编译时替换（明示常量）
int main(void)
{
    char name[40];
    printf("What's your name\n");
    scanf("%s",name);//如果输入Angela Plains 则只读取 前一个，因为scanf读取到空格时候就截止了
    printf("Hello,%s.  %s\n",name ,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);//11  40 sizeof (name)是全部数组的空间
    printf("The phrase of praise has %zd letters ",strlen(PRAISE));//31 
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);//32   另外，sizeof PRAISE 这里没有用（） 运算对象是类型还是特定量 ， 类型必须用（）如: sizeof(int);

    return 0;
}