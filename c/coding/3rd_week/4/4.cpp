#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1, str2;
  int count = 0;
  cin >> str1 >> str2;
  if (str1.length() - str2.length() >= 0)
  {
    for (int i = 0; i < str1.length() - str2.length() + 1; i++)
    {
      string temp;
      for (int j = 0; j < str2.length(); j++)
      {
        temp += str1[i + j];
      }
      if (str2.compare(temp) == 0)
      {
        if (count == 0)
        {
          cout << i;
          count++;
          continue;
        }
        cout << ' ' << i;
        count++;
      }
    }
  }
  if (count != 0)
  {
    return 0;
  }
  cout << -1 << endl;
  return -1;
}
