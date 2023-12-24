#include <stdio.h>
#include <string.h>
#define Length 1000
int main(void)
{
    char s[Length],str2[Length] = { 0 };
    int j = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] % 2 != 0 && i % 2 != 0)
        {
            str2[j] = s[i];
            j++;
        }
    }
    puts(str2);
    return 0;
}