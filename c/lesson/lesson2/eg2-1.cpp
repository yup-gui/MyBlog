#include <iostream> //标准输入输出
#include <string>
using namespace std; // 命名空间必须写
#define MAX 10
// 查找两个数最小公倍数,不断累加
// int main()
// {
//   int a, b, m;
//   cout << "输入两个数"; // cout直接输出后面内容
//   cin >> a >> b;        // cin检测键盘输入
//   m = a;
//   while (m % b != 0)
//     m += a;
//   cout << "最小公倍数为" << m << endl;
//   return 0;
// }
// 寻找质因子
int main()
{
  int table[MAX] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  int a, b;
  cout << "输入两个数";
  cin >> a >> b;
  int p[MAX] = {0}, q[MAX] = {0};
  int Index_pq; // 使用同一个下标
  for (int i = 0; i < MAX; i++)
  {
    int timesA, timesB = 0; // 每次循环置零
    int k = table[i];
    while (a % k == 0)
    {
      timesA++;
      a = a / k;
    }
    while (b % k == 0)
    {
      timesB++;
      b = b / k;
    }
    if (timesA > 0 || timesB > 0) // 判断是否记录该质因子
    {
      p[Index_pq] = k;                                 // p记录质因子
      q[Index_pq] = timesA > timesB ? timesA : timesB; // 如果a>b,就取前面，否则取后面；q记录每个质因子最多个数
      Index_pq++;                                      // 记录质因子总的个数
    }
    if (a == 1 && b == 0) // 退出条件
    {
      break;
    }
  }
  int lcm = 1;
  for (int i = 0; i < Index_pq; i++)
  {
    for (int j = 0; j < q[i]; j++) // 整数次方不要去用pow（x,y），其返回double类型
    {
      lcm *= p[i];
    }
  }
  cout << "最小公倍数" << lcm << endl; // endl换行并结束输出流
  return 0;
}