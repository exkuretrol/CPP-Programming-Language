#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(nullptr));
    int n;
    while (cin >> n && n)
    {
        vector<int> v(10);
        for (int i = 0; i < n; i++) v[rand() % 10]++;
        for (int i = 0; i < v.size(); i++) 
            cout << i + 1 << ": " << v[i] 
                 << ", prob: " << v[i] * 1.0 / n * 1.0 << endl;
    }
}
