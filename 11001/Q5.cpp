#include <iostream>
using namespace std;

int main()
{
    int n;
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0};
    cin >> n; // n = 8
    for (int i = 0; n > 0; i++)
    {
        b[i] = n % 2;
        n /= 2;
    }
    cout << "b";
    for (int i = 7; i >= 0; i--) cout << b[i];
}