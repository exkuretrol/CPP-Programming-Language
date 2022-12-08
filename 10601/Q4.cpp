#include <iostream>
using namespace std;

int main()
{
    int n;
	cin >> n; // n = 7
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d * %d = %2d\t", j, i, i * j);
        }
        cout << endl;
    }
}