#include <iostream>
#include <string>
using namespace std;
int main()
{
  int total;
  int number[100000] = {0};
  int sum = 0;
  int max = 0;
  int isNegative = 1;
  cin >> total;
  for (int i = 0; i < total; i++) // 输入
  {
    cin >> number[i];
  }
  for (int a = 0; a < total; a++)
  {
    sum = 0; // 重置计算
    for (int b = a; b < total; b++)
    {
      sum += number[b];
      if (sum > max)
      {
        max = sum;
        isNegative = 0;
      }
    }
  }
  if (isNegative)
  {
    cout << 0 << endl;
    return 0;
  }
  cout << max << endl;
  return 0;
}
