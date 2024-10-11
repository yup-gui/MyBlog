#include <iostream>;
#include <string>;
#include <algorithm>; //对string类反转的reverse(string.begin(),string.end())
#include <cmath>;
using namespace std;
int main()
{
  string char1, char2;
  int result[100] = {0};
  int answer = 0;
  cin >> char1 >> char2;
  reverse(char1.begin(), char1.end());
  reverse(char2.begin(), char2.end());
  if (char1.length() >= char2.length())
  {
    for (int i = 0; i < char2.length(); i++)
    {
      result[i] = char1[i] - '0' + char2[i] - '0';
      answer += result[i] * int(pow(10, i));
    }
    for (int j = char2.length(); j < char1.length(); j++)
    {
      result[j] = char1[j] - '0';
      answer += result[j] * int(pow(10, j));
    }
  }
  else
  {
    for (int i = 0; i < char1.length(); i++)
    {
      result[i] = char1[i] - '0' + char2[i] - '0';
      answer += result[i] * int(pow(10, i));
    }
    for (int j = char1.length(); j < char2.length(); j++)
    {
      result[j] = char2[j] - '0';
      answer += result[j] * int(pow(10, j));
    }
  }
  cout << answer << endl;
  return 0;
}