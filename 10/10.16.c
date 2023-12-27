#include <stdio.h>
int main(void)
//通过指针获取zippo的信息
//详细见  try5.c
{
    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5,7}};
    int (*pz)[2];//（*pz）[2] 指向一个内含两个int类型值的数组
    // int* pax[2];  pax 是一个内含两个指向int类型值的指针。
    pz = zippo;
    //可以直接给pz当成10.15.c中的zippo  因为pz指向的就是zippo的首地址
    printf("    pz = %p,    pz + 1 = %p\n", pz, pz + 1);
    printf("    pz[0] = %p,    pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("    *pz[0] = %p,   *pz + 1 = %p\n", *pz[0], *pz + 1);
    printf("    pz[0][0] = %d\n", pz[0][0]);
    printf("    *pz[0] = %d\n", *pz[0]);
    printf("    **pz = %d\n", **pz);
    printf("    **pz[2][1] = %d\n", pz[2][1]);
    printf("    *(*(pz+2) + 1) = %d\n", *(*(pz+2) + 1));
}