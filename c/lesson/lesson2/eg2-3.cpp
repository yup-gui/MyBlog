#include <iostream> //标准输入输出
#include <string>
using namespace std;
int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  if (str1.length() > str2.length())
  {
    cout << str1.length() << endl;
  }
  else
  {
    cout << str2.length() << endl;
  }
}