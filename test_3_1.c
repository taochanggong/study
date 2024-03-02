# include <stdio.h>

int main()
{
    // 输入数据
    int id=0;
    float c=0.0f;
    float math=0.0f;
    float eng=0.0f;
    scanf("%d;%f,%f,%f",&id,&c,&math,&eng);
    // 输出数据,要小数点之后两位,就写.2
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
    
    return 0;
} 