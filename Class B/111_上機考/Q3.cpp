#include <iostream>
#include <vector>
using namespace std;

bool prime(int n)
{
    if (n == 2) return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n = 100;
    vector<int> v;
    for (int i = 2; i < 1000; i++) 
        if (n && prime(i)) 
            v.push_back(i), n--;

    while (cin >> n && n <= 100 && n > 0)
    {
        for (int i = 0; i < n; i++) cout << v[i] << endl;
        cout << endl;
    }
}
