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

    char c;
    cout << "input g to generate" << endl;

    while (cin >> c && c == 'g')
    {
        random_shuffle(v.begin(), v.end());

        char p = 'A';
        int c = 0;
        for (int i = 1; i <= 52; i++)
        {
            if (i % 13 == 1) cout << endl << p++ << endl;

            int idx = i - 1;
            int suits = v[idx] / 13;
            int card = v[idx] % 13;
            
            if (suits == 0) cout << "♤";
            else if (suits == 1) cout << "♡";
            else if (suits == 2) cout << "♢";
            else if (suits == 3) cout << "♧";
                
            if (card == 0) cout << 'A', c += 4;
            else if (card == 10) cout << 'J', c += 1;
            else if (card == 11) cout << 'Q', c += 2;
            else if (card == 12) cout << 'K', c += 3;
            else cout << card;
            cout << " ";

            if (i % 13 == 0) cout << "points: " << c, c = 0;
        }
    }
}
