#include <stdio.h>
void func(char* str1)
{
    char t = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = i+1; str1[j] != '\0'; j++)
        {
            if (str1[i] >= '0' && str1[i] <= '9')
            {
                if (str1[j]<'0' || str1 [j] > '9')  
                {
                    t = str1[i];
                    str1[i] = str1[j];
                    str1[j] = t;
                }
            }
        }
    }
}
int main(void)
{
    char str1[1000] = { 0 };
    gets(str1);
    func(str1);
    puts(str1);
    return 0;
}