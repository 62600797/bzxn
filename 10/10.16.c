#include <stdio.h>
int main(void)
//ͨ��ָ���ȡzippo����Ϣ
//��ϸ��  try5.c
{
    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5,7}};
    int (*pz)[2];//��*pz��[2] ָ��һ���ں�����int����ֵ������
    // int* pax[2];  pax ��һ���ں�����ָ��int����ֵ��ָ�롣
    pz = zippo;
    //����ֱ�Ӹ�pz����10.15.c�е�zippo  ��Ϊpzָ��ľ���zippo���׵�ַ
    printf("    pz = %p,    pz + 1 = %p\n", pz, pz + 1);
    printf("    pz[0] = %p,    pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("    *pz[0] = %p,   *pz + 1 = %p\n", *pz[0], *pz + 1);
    printf("    pz[0][0] = %d\n", pz[0][0]);
    printf("    *pz[0] = %d\n", *pz[0]);
    printf("    **pz = %d\n", **pz);
    printf("    **pz[2][1] = %d\n", pz[2][1]);
    printf("    *(*(pz+2) + 1) = %d\n", *(*(pz+2) + 1));
}