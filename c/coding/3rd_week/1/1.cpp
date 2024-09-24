// 求出三个数的最大值
// 包括有整数的比较、浮点数的比较、双精度的比较。

// 先有一个判断比较的类型，如果输入1，则为整数；2为浮点数；3为双精度。

#include <iostream>
using namespace std;
int main()
{
  int category;
  cin >> category;
  switch (category)
  {
  case 1:
    int a_num[3];
    int a_max;
    for (int i = 0; i < 3; i++)
    {
      cin >> a_num[i];
      if (i == 1)
        a_max = a_num[i];
      if (a_num[i] > a_max)
        a_max = a_num[i];
    }
    cout << a_max << endl;
    break;
  case 2:
    float b_num[3];
    float b_max;
    for (int i = 0; i < 3; i++)
    {
      cin >> b_num[i];
      if (i == 1)
        b_max = b_num[i];
      if (b_num[i] > b_max)
        b_max = b_num[i];
    }
    cout << b_max << endl;
    break;
  case 3:
    double c_num[3];
    double c_max;
    for (int i = 0; i < 3; i++)
    {
      cin >> c_num[i];
      if (i == 1)
        c_max = c_num[i];
      if (c_num[i] > a_max)
        c_max = c_num[i];
    }
    cout << c_max << endl;
    break;
  default:
    cout << "input error!" << endl;
    break;
  }
  return 0;
}
