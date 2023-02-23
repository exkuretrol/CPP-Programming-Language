#include <iostream>
#include <string>
using namespace std;
#define question "UVa673"
#define input question ".in.txt"
#define output question ".out.txt"

int main()
{
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    int n;
    cin >> n;
    cin.get();

    string p = "()";
    string s = "[]";

    string str;
    while (n--)
    {
        getline(cin, str);
        while (
            str.find(p) != string::npos || 
            str.find(s) != string::npos
        )
        {
            if (str.find(p) != string::npos)
            {
                str.replace(str.find(p), 2, "");
            }
            if (str.find(s) != string::npos)
            {
                str.replace(str.find(s), 2, "");
            }
        }

        if (str.size() > 0) cout << "No";
        else cout << "Yes";
        cout << endl;
    }
}