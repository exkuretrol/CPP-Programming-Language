#include <iostream>
using namespace std;

int main()
{
    int carry = 0, times = 0;
    int x, y;
    int a, b;
    cin >> x >> y;
    while (x % 10 || y % 10)
    {
        a = x % 10;
        b = y % 10;
        x /= 10;
        y /= 10;
        if (a + b + carry >= 10)
        {
            times++;
            carry = 1;
        }
        else carry = 0;
    }
    cout << times;
}