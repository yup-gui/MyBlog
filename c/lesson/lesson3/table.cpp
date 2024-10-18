// List
#include <iostream>
#include <string>
using namespace std;
const int MAX = 20;
List list;
LNode *head;
struct List
{
  int length = 0;
  int maxsize = MAX;
  int data[MAX];
};

struct LNode
{
  int data;    // 数据域
  LNode *next; // 指针域
};

void main()
{
  head = new LNode;            // 相当于c里面malloc，分配一个空间
  head->data = NULL;           // 头节点不放数据
  for (int i = 0; i < 10; i++) // 初始化list
  {
    list.length++;
    if (list.length > list.maxsize)
    {
      cout << "输入超限！";
      break;
    }
    list.data[i] = i;
  }
}
// 顺序表添加
void insert(List *L, int i, int number)
{
  if (i < 0 || i > L->length || L->length == L->maxsize)
  {
    cout << "插入位置错误或者表满";
  }
  else
  {
    for (int a = L->length - 2; a >= i; a--)
    {
      L->data[a + 1] = L->data[a];
    }
    L->data[i] = number; // 在下标为i处添加内容
    L->length++;
  }
}
// 线性表删除
void del(List *L, int i)
{
  if (i < 0 || i > L->length || L->length == 0)
  {
    cout << "删除位置错误或者空表";
  }
  else
  {
    for (int a = i; a < L->length - 1; a--)
    {
      L->data[a] == L->data[a + 1];
    }
    L->length--;
  }
}

// 链表长度
int Length()
{
  LNode *p = head->next;
  int len = 0;
  while (p != NULL)
  {
    len++;
    p = p->next; // 指针后移
  }
  return len;
}

// 链表插入
void LNodeinsert(LNode *head, int i, int x)
{
  if (i < 0)
  {
    cout << "不存在第" << i << "个位置";
  }
  else
  {
    LNode *p = head;
    int k = 0;
    while (p != NULL && k < i) // 找到第i个节点
    {
      p = p->next;
      k++;
    }
  }
}