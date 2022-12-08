// 輸入西元年、月、日，輸出此日期是該年的第幾天？
#include <iostream>
using namespace std;

int mday(int y, int m);
int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    int acc = 0;
    if (m == 1) acc = d;
    else
    {
        for (int i = 1; i < m; i++)
        {
            acc += mday(y, i);
        }
        acc += d;
    }
    cout << acc;
}

int mday(int y, int m)
{
    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return 29;
            else return 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        default:
            return -1;
    }
}