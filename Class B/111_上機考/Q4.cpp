#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<int> v(26);
        for (auto &c : s)
        {
            if (c == '0') break;
            else if (c >= 'A' && c <= 'Z') v[c - 'A']++;
        }
        for (int i = 0; i < v.size(); i++)
            if (v[i]) cout << (char) (i + 'A') << ": " << v[i] << endl;
        cout << endl;
    }
}
