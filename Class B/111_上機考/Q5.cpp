#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 2022/1/1 is saturday
    string w[7] = {"Sa", "Su", "Mo", "Tu", "We", "Th", "Fr"};
    int ds[] = {0, 31, 28, 31, 30,
                   31, 30, 31, 31,
                   30, 31, 30, 31};
    int m, n;
    while (cin >> m >> n && m && n)
    {
        int d = 0;
        if (m > 1)
        {
            for (int i = 1; i < m; i++) d += ds[i];
        }
        d += n;
        d -= 1;
        cout << w[d % 7] << endl;
    }
}
