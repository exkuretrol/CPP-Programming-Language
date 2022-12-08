#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n, max = INT_MIN, min = INT_MAX;
    while (cin >> n) // n = 123, 4, -1
    {
        if (n == -1 && max == INT_MIN && min == INT_MAX)
        {
            cout << "請先輸入 -1 以外的數值才能比較！";
            break;
        }
        if (n == -1)
        {
            printf("Maximum: %d\nMinimum: %d\n", max, min);
            break;
        }
        if (n > max) max = n;
        if (n < min) min = n;
    }
}