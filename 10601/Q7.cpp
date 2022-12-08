// 輸入一些正整數（−1代表結束），輸出這些整數中的最大值與最小值。
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "輸入一些正整數（−1代表結束）";
    int n, max = INT_MIN, min = INT_MAX;
    while (cin >> n) // n = 123982 38382 023 -1
    {
        if (n == -1) break;
        if (n > max) max = n;
        if (n < min) min = n;
    }
    cout << "最大值: " << max << endl << "最小值: " << min;
}