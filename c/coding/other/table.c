#include <stdio.h> //NULL也是定义在这里面的
#include <stdlib.h>
// 顺序区
// 长度指的都是存储数据个数
typedef struct list
{
    int *address; // 根据要创建的表存储数据类型不同而变化（address）
    int len;      // 当前已经存储进入的数据长度
    int maxlen;   // 表允许存放的最大数据长度
} LIST;
// 栈区
typedef struct stack
{
    int *address;
    int bottom;
    int top;
} STACK;
// 队列
typedef struct line
{
    int *address;
    int start;
    int end;
} LINE;
// 顺序区(任意操作)
LIST *CreatList(int len) // 传递的len指的是线性表里面存储的整数个数
{
    /*get存储表头信息，表头信息包括创建表的首地址（还必须用malloc创建，calloc创建的是n块不连续的空间，后续不好定位），
    表目前长度和表允许的最大长度*/
    LIST *get = (LIST *)malloc(sizeof(LIST));
    if (get == NULL)
    {
        printf("ERROR!!!");
        return NULL;
    }
    get->address = (int *)malloc(4 * len); // 得到创建表的首地址
    if (get->address == NULL)
    {
        printf("ERROR!!!");
        return NULL; // 没申请成功就让函数返回空值
    }
    // 初始化线性表
    get->len = 0;
    get->maxlen = len; // 创建的表长度（也就是最大长度）
    return get;        // 返回表头信息
}
// 栈区(只对头进行操作)
STACK *CreatStack(int len)
{
    STACK *get = (STACK *)malloc(sizeof(STACK));
    if (get == NULL)
    {
        printf("ERROR!!!");
        return NULL;
    }
    get->address = (int *)malloc(4 * len);
    if (get->address == NULL)
    {
        printf("ERROR!!!");
        return NULL;
    }
    // 初始化栈区
    get->bottom = 0;
    get->top = 0;
    return get;
}
// 队列(对头尾进行操作  头出尾进)
LINE *CreatLine(int len)
{
    LINE *get = (LINE *)malloc(sizeof(LINE));
    if (get == NULL)
    {
        printf("ERROR!!!");
        return NULL;
    }
    // 初始化
    get->address = (int *)malloc(4 * len);
    if (get->address == NULL)
    {
        printf("ERROR!!!");
        return NULL;
    }
    get->start = 0;
    get->end = 0;
    return get;
}
// 顺序表插入,直接传递表头信息即可
LIST *insertList(LIST *origin, int pos, int target)
{
    int i = origin->len;
    for (i; i > pos; i--)
    {
        origin->address[i] = origin->address[i - 1];
    }
    origin->address[i] = target;
    return origin;
}
int main()
{
    LIST *list = CreatList(5);
    // 输入表数据
    for (int i = 0; i < 5; i++)
    {
        list->address[i] = i;
        list->len++;
    }
    // 插入数据
    list = insertList(list, 3, 999);
    for (int i = 0; i < 6; i++)
    {
        printf(" %d", list->address[i]);
    }
    free(list);
    return 0;
}