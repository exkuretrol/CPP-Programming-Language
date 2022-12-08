#include <iostream>
using namespace std;

int main()
{
	int n;
    while (cin >> n) // n = 2, 15
    {
        if (n % 2 != 0)
        {
            int acc = 0;
            for (int i = 1; i <= n; i += 2)
            {
                acc += i;
            }
            cout << acc;
            break;
        }
    }
}