#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // J -> 1 // 11 -> 10
    // Q -> 2 // 12 -> 11
    // K -> 3 // 13 -> 12
    // A -> 4 // 1 -> 0
    vector<int> v;
    for (int i = 0; i < 52; i++) v.push_back(i);
    while (true)
    {
        random_shuffle(v.begin(), v.end());

        char p = 'A';
        int c = 0;
        for (int i = 1; i <= 52; i++)
        {
            if (i % 13 == 1) cout << endl << p++ << endl;
            int idx = i - 1;
            int card = v[idx] % 13;

            if (card == 0) cout << 'A', c += 4;
            else if (card == 10) cout << 'J', c += 1;
            else if (card == 11) cout << 'Q', c += 2;
            else if (card == 12) cout << 'K', c += 3;
            else cout << card;
            cout << " ";

            if (i % 13 == 0) cout << "points: " << c, c = 0;
        }
        system("read -r -n1 -p 'press any key to continue'");
    }
}
