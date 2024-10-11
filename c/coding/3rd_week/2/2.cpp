#include <iostream>;
#include <string>;
using namespace std;
const int MAX = 20;
int main()
{
  string sentence, words[MAX];
  getline(cin, sentence);
  int j = 0;
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] != ' ')
    {
      words[j] += sentence[i];
    }
    else
    {
      j++;
    }
  }
  cout << words->length();
  for (int i = words->length() - 2; i > 0; i--)
  {
    cout << words[i] << ' ';
  }
  cout << words[0] << endl;
  return 0;
}