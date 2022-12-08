// 請輸入一個字串（最多 10 個字元），將字串中的文字大小寫互換後輸出。
#include <iostream>
using namespace std;

char switchCase(char a);
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        cout << switchCase(s[i]);
    }
}

char switchCase(char a)
{
    // 'A' = 65
    // 'Z' = 90
    // 'a' = 97
    // 'z' = 122

    int i = (int) a;
    if (i <= 90 && i >= 65) return (char) i + 32;
    else return (char) i - 32;
}