#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int max = 0;
    int num[100];
    int N;
    printf("请输入数字个数：");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
        if (i == 0)
            max = num[0];
        if (max < num[i])
            max = num[i];
    }
    printf("最大数字是:%d", max);
    return 0;
}
