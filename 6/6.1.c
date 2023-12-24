#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    // int status;

    printf("Please enter an intefer to be summesd ");
    printf("(q to quit):");//随便输入一个字母就可以退出
    // status = scanf("%ld", &num);//是否读取成功 这里用scanf的返回值当做循环条件
    while (scanf("%d", &num) == 1)//当输入字符,scanf就读取失败,循环就会退出
    {//循环条件简单修改  (全部为  开头//)
        sum += num;
        printf("Please enter next integer (q to quit): ");
        // status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    
    return 0;
}