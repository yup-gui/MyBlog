// 求出三个数的最大值
// 包括有整数的比较、浮点数的比较、双精度的比较。

// 先有一个判断比较的类型，如果输入1，则为整数；2为浮点数；3为双精度。

#include <iostream>
using namespace std;
template <typename T> // 模板函数，T为模拟变量类型
T max(T a, T b, T c)  // 不加分号,找出三个数中的最大值
{
  if (b > a)
    a = b;
  if (c > a)
    a = c;
  return a;
}
int main()
{
  int category;
  cin >> category;
  switch (category)
  {
  case 1:
    int a_num[3];
    for (int i = 0; i < 3; i++)
      cin >> a_num[i];
    cout << max(a_num[0], a_num[1], a_num[2]) << endl;
    break;
  case 2:
    float b_num[3];
    for (int i = 0; i < 3; i++)
      cin >> b_num[i];
    cout << max(b_num[0], b_num[1], b_num[2]) << endl;
    break;
  case 3:
    double c_num[3];
    for (int i = 0; i < 3; i++)
      cin >> c_num[i];
    cout << max(c_num[0], c_num[1], c_num[2]) << endl;
    break;
  default:
    cout << "input error!" << endl;
    break;
  }
  return 0;
}
