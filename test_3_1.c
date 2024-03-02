# include <stdio.h>

int main()
{
    // 输入数据,0.0f,0.0是double类型,要float类型,就在后面加个f.
    int id=0;
    float c=0.0f;
    float math=0.0f;
    float eng=0.0f;
    scanf("%d;%f,%f,%f",&id,&c,&math,&eng);
    // 输出数据,要小数点之后两位,就写.2,如果是整型,比如输入年月日的日期的时候,3月要输出位03,这时要写为%02d, 
    // 如果不写0就会是输出两位,但是不是用零占位,是输出一个空格.
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
    
    return 0;
} 
