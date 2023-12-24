#include <stdio.h>
#include <string.h>
#define Num 1000
void func(char* str1, char* str2,char* str3)
{
    int a = 0,b = 0;
    a = strlen(str1);
    b = strlen(str2);
    int Length = (a > b ? a : b);
    for (int i = 0; i <Length ; i++)
    {
        str3[i] = (str1[i] > str2[i] ? str1[i] : str2[i]);
    }
}
int main(void)
{
    char str1[Num] = { 0 },str2[Num] = { 0 },str3[Num] = { 0 };
    gets(str1);
    gets(str2);
    func(str1,str2,str3);
    puts(str3);
    return 0;
}