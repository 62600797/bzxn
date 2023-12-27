#include <stdio.h>
#define ROWS 3
#define COLS 4

//通过行和列分别求和， 求列和只需要把数组行和列颠倒 （i，j）颠倒

//元素的行和  最终还是80
void sum_rows(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;

    for(r = 0;r < rows; r++)
    {
        tot = 0;
         for (c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }
}
//元素的列和  最终还是80
void sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;
    for(c = 0; c < COLS; c++)
    {
        tot = 0;
        for (r = 0; r< rows; r++)
            tot += ar[r][c];
        printf("col %d: sum = %d\n", c, tot);
    }
}
//元素之和  最终还是80
int sum2d(int(*ar)[COLS], int rows)
{
    int r;
    int c;
    int tot = 0;

    for (r = 0;r < rows; r++)
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
    
    return tot;
}

int main(void)
{
    int junk[ROWS][COLS] = {
            {2,4,6,8},
            {3,5,7,9},
            {12,10,8,6}
    };
    
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of elements( 元素总和 ) = %d\n", sum2d(junk, ROWS));

    return 0;
}

