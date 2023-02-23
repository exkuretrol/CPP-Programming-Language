#include <iostream>
#include <string>
using namespace std;
#define question "UVa10222"
#define input question ".in.txt"
#define output question ".out.txt"

int main()
{
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    string s;
    string dict = "dmbgthjkpl;'.,[]eyfuonrvic";
    while(getline(cin, s))
    {
        for (char c : s) 
        {
            if (c == ' ') 
            {
                cout << ' ';
                continue;
            }
            c = tolower(c);
            int i = dict.find(c);
            cout << (char) (i + 97);
        }
        cout << endl;
    }
}