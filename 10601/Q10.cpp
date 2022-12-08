#include <iostream>
using namespace std;

int mday(int y, int m);
bool leap(int i);
int yearday(int y, int m, int d);
string findWeekDay(int y, int m, int d);

int main()
{
    int y, m, d;
    cout << "請輸入年：";
    cin >> y;
    cout << "請輸入月：";
    cin >> m;
    cout << "請輸入日：";
    cin >> d;
    cout << findWeekDay(y, m, d);
}

bool leap(int i)
{
    return i % 400 == 0 || (i % 4 == 0 && i % 100 != 0);
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
            if (leap(y)) return 29;
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

int yearday(int y, int m, int d)
{
    int acc = 0;
    if (m >= 2)
    {
        for (int i = 1; i < m; i++)
        {
            acc += mday(y, i);
        }
    }
    acc += d;
    return acc;
}

string findWeekDay(int y, int m, int d)
{
    string w[] = {"六", "日", "一", "二", "三", "四", "五"};
    string result;
    int acc = 0;

    if (y > 2000)
    {
        acc += 365;
        for (int i = 2001; i <= y - 1; i++)
        {
            int day = leap(i) ? 366 : 365;
            acc += day;
        }
        acc += yearday(y, m, d);
        result = w[acc % 7];
    }
    if (y < 2000)
    {
        acc += 1;
        for (int i = 1999; i > y; i--)
        {
            int day = leap(i) ? 366 : 365;
            acc += day;
        }
        int y_day = leap(y) ? 366 : 365;
        acc += y_day - yearday(y, m, d);
        result = w[-acc % 7 + 7];
    }
    if (y == 2000)
    {
        acc = yearday(y, m, d) - 1;
        result = w[acc % 7];
    }
    return result;
}