#include <iostream>
using namespace std;

int mday(int m);
int main()
{
// 2021年某月某日
// 2021/1/1 是星期五
    string w[7] = {"日", "一", "二", "三", "四", "五", "六"};
    int m, n;
    cout << "請輸入月份：";
    cin >> m;
    cout << "請輸入日期：";
    cin >> n;

    int acc = 0;
    int acc_2 = 0;

    if (m == 1)
    {
        acc = n;
    }

    if (m > 1)
    {
        for (int i = 1; i < m; i++)
        {
            acc += mday(i);
            acc_2 += mday(i);
        }
        acc += n;
    }
    acc_2 += 1;
    int w_ind = (acc + 4) % 7;

    int first_day_ind = (acc_2 + 4) % 7;
    cout << 2021 << "-" << m << "-" << n << " 是星期" << w[w_ind] << endl;

    int l = sizeof(w) / sizeof(w[0]);

    // cout << "2021" << "-" << m << endl;
    for (int i = 0; i < l; i++)
    {
        cout << "\t" << w[i];
    }
    cout << endl;

    for (int j = 0; j < first_day_ind; j++) cout << "\t ";

    for (int i = 1; i <= mday(m); i++)
    {
        cout << "\t";
        printf("%2d", i);
        if ((i + first_day_ind) % 7 == 0) cout << endl;
    }
}

int mday(int m)
{
    switch(m)
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
            return 28;
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