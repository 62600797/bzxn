#include <stdio.h>
//使用变宽输入字段
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);//输入程序使用的字段宽度   6
    printf("The number is :%*d:\n", width, number);//*可以看做是要输入的一个数
    printf("Now enter a width and aprecision:\n");
    scanf("%d %d", &width, &precision);//8 3
    printf("Weight = %*.*f\n", width, precision, weight);//一个*对应一个要输入的数,所以width代表6,precision代表8,weight代表3
    printf("Done!\n");

    return 0;
}