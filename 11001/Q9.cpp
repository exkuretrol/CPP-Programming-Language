#include <iostream>
using namespace std;

int pow(int b, int p);

int main()
{
    int n;
    cin >> n;
    int acc = 0;
    for (int i = 1; i <= n; i++)
    {
        acc += pow(i, i);
    }
    cout << acc;
}

int pow(int b, int p)
{
    if (p == 1) return b;
    return b * pow(b, p - 1);
}