// 輸入正整數𝑛，輸出𝑛個 Fibonacci Numbers(1,1,2,3,5,8,13,21,34,…)。
#include <iostream>
using namespace std;

int fibnum(int n);

int main()
{
	cout << "輸入 Fibonacci Series 的長度：";
    int n;
    cin >> n; // n = 9
    for (int i = 0; i <= n; i++)
    {
        if (i == 0) continue;
        if (i == n) cout << fibnum(i);
        else cout << fibnum(i) << ", ";
    }
}

int fibnum(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibnum(n - 1) + fibnum(n - 2);
}
