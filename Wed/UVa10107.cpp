#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define question  "UVa10107"
#define input question ".in.txt"
#define output question ".out.txt"

int main()
{
    vector<int> v;
    int n;
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    
    while (cin >> n)
    {
        v.push_back(n);
        sort(v.begin(), v.end());
        int l = v.size();
        int m;
        if (l % 2)
        {
            m = (1 + l) / 2 - 1;
            cout << v[m] << endl;
        }
        else
        {
            m = l / 2 - 1;
            cout << (v[m] + v[m + 1]) / 2 << endl;
        }
    }
}