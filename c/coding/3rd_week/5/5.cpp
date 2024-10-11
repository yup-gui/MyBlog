#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string number;
  cin >> number;
  string temp = number;
  reverse(number.begin(), number.end());
  if (temp == number)
  {
    cout << 1 << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}