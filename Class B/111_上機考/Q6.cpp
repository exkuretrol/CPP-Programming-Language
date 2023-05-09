#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int n;
        vector<int> v;
        istringstream iss(s);
        while (iss >> n && n != -1)
        {
            if (n <= 0) continue;
            v.push_back(n);
        }
        sort(v.begin(), v.end(), less<int>());
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
