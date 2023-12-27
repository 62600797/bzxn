#include <stdio.h>
//zippo相关信息
int main(void)
{
    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5,7}};

    printf("    zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
    printf("    zippo[0] = %p,    zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf("    *zippo[0] = %p,   *zippo + 1 = %p\n", *zippo[0], *zippo + 1);
    printf("    zippo[0][0] = %15d\n", zippo[0][0]);
    printf("    *zippo[0] = %15d\n", *zippo[0]);
    printf("    **zippo = %15d\n", **zippo);
    printf("    **zippo[2][1] = %15d\n", zippo[2][1]);
    printf("    *(*(zippo+2) + 1) = %15d\n", *(*(zippo+2) + 1));

}