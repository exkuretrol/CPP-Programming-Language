#include <iostream>
using namespace std;

int main()
{
    string s(100 + 1, 0);
    while(getline(cin, s))
    {
        int c = 0;
        for (int i = 0; i < s.size() - 2; i++)
            if (
                s[i] == 'm' &&
                s[i + 1] == 'c' &&
                s[i + 2] == 'u'
            ) c++;
        cout << c << endl;
    }
}
