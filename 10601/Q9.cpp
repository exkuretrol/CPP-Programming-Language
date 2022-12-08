#include <iostream>
using namespace std;

int main()
{
    int max = 10;
    int n;
    int counter = 0;
    int A[10];

    while (cin >> n) // n = 5 3 2 1 4 -1
    {
        if (n < 1 && n != -1)
        {
            cout << "請輸入正整數！" << endl;
            break;
        }
        if (n == -1) break;
        A[counter] = n;
        counter++;
        if (counter == 10) break;
    }

    int i, j, tmp;
    n = sizeof(A) / sizeof(int);
    for(i = n-1; i > 0; i--)
    {
        for(j = 0; j <= i-1; j++)
        {
            if( A[j] > A[j+1])
            {
                tmp = A [j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            cout << A[i];
            if (i != n - 1) cout << ", ";
        }
    }
}