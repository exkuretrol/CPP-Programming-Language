// 輸入一些符號（a~z，0代表結束），輸出各種符號出現的次數。
#include <iostream>
using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
	//string ss = "jsdklfjslkdfjvioajdfjwelkjvaiosjdfzzz";
    string ss;
    cin >> ss;
    int d[26] = {};
    for (int i = 0; i < ss.size(); i++)
    {
        d[s.find(ss[i])] += 1;
    }

    for (int j = 0; j < s.size(); j++)
    {
        if (j % 7 == 0 && j != 0) cout << endl;
        cout << s[j] << ": " << d[j] << "\t";
    }
}