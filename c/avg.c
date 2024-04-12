#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int N, M;
    double number[1000] = {0}, avg, sum = 0;
    printf("请输入数字个数：");
    scanf("%d", &N);
    printf("请输入有效数字:"); // 整数部分数字个数不会比有效数字大
    scanf("%d", &M);
    printf("请依次输入各个数：\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &number[i]);
        sum = sum + number[i];
    }
    avg = sum / N;
    int times = 0;
    while (avg < pow(10, M - 1))
    {
        avg = avg * 10;
        times++;
    }
    int tmp = avg + 0.5; // 四舍五入
    avg = tmp;
    for (int i = 0; i < times; i++)
    {
        avg = avg / 10;
    }
    printf("平均数是：%.10lf\n", avg);
    sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + pow(number[i] - avg, 2);
    }
    sum = sum / (N - 1);
    avg = sqrt(sum);
    printf("标准偏差为：%.12lf\n", avg);
    sum = sum / N;
    avg = sqrt(sum);
    printf("平均值的标准偏差为：%.12lf", avg);
    return 0;
}