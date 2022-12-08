#include <iostream>
using namespace std;

bool primeOrNot(int n);
void primeList(int n);
int main()
{
	int n;
	cout << "請輸入質數數列長度：";
	cin >> n;
	primeList(n);
}

bool primeOrNot(int n) // 8
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

void primeList(int n) // 2
{
    int counter = 0;
    for (int i = 2; 1; i++)
    {
        if (primeOrNot(i)) 
        {
            cout << i;
            counter++;
            if (counter == n) break;
            else cout << ", ";
        }
    }
}