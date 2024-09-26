#include <iostream>;
#include <string>;
#include <vector>;
#include <sstream>;
using namespace std;
int main()
{
  // 1.输入一行字符
  // 2.按照ko拆分单词并存储到一个vector（向量）里面，也就是动态数组
  // 3.将单词逆序存储
  // 4.输出逆序后的结果
  string sentence;
  string word;
  getline(cin, sentence);             // 获取整行字符
  stringstream broken_down(sentence); // stringstream是sstream库里面的一个类
  vector<string> words;               // vector是vector库里面的一个类，就是动态数组，使用时verctor<>
  while (broken_down >> word)         // broken_down >> word是一个检测流输入，将broken_down里面每个单词依次输入进入word，如果输入了就返回true
  {
    words.push_back(word); // 输入成功就放进words向量里面
  }
  for (int i = words.size() - 1; i >= 0; i--) // words.size()返回vector大小，从最后一个单词开始输出
  {
    if (i == words.size() - 1) // 控制输出格式
      cout << words[i];
    else
      cout << " " << words[i];
  }
  cout << endl; // 最后加上换行符
  return 0;
}