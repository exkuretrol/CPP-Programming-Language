#include <iostream>
using namespace std;

void numTimes(int n);

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        numTimes(i);
        if (i != n + 1) cout << ", ";
    }
    return 0;
}

void numTimes(int n)
{
    int times = n;
    while (times, times--)
    {
        cout << n;
        if (times != 0) cout << ", ";
    }
}

