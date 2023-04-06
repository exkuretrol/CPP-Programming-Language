#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
// #define question "UVa514"
// #define input question ".in.txt"
// #define output question ".out.txt"
using namespace std;


int main()
{
    // freopen(input, "r", stdin);
    // freopen(output, "w", stdout);

    int n;
    while (cin >> n)
    {
        cin.get();
        if (n == 0)
        {
            break;
        }
        string s;
        while (getline(cin, s))
        {
            if (s[0] == '0')
            {
                cout << endl;
                break;
            }
            else 
            {
                stringstream ss(s);
                stack<int> st;
                queue<int> q;
                for (int i = 0; i < n; i++)
                {
                    int j;
                    ss >> j;
                    q.push(j);
                }

                for (int i = 1; i <= n; i++)
                {
                    st.push(i);
                    while (!st.empty() && st.top() == q.front()) st.pop(), q.pop();
                }

                cout << (st.empty() ? "Yes" : "No") << endl;
            }
        }
    }
}