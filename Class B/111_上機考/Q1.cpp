#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		// space: n--
		// *    : 2n + 1
		for (int i = 0; i < n; i++)
		{
			for (int j = (n - i); j > 0; j--) cout << " ";
			for (int k = 0; k < (2 * i + 1); k++) cout << "*";
			cout << endl;
		}
	}
}
