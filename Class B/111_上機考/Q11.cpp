#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string match(string s, string target)
{
    int a = 0;
    int b = 0; 
    for (int i = 0; i < target.size(); i++)
    {
        if (s[i] == target[i]) a++;
        else if (target.find(s[i]) != string::npos) b++;
    }
    return to_string(a) + "A" + to_string(b) + "B";
}

string init()
{
    string p = "0123456789";
    random_shuffle(p.begin(), p.end());
    return p.substr(0, 4);
}

int main()
{
    char a;
    while (cout << "press s to start, q to quit" << endl && cin >> a)
    {
        // start game
        if (a == 's')
        {
            int i = 0;
            string t = init(), input;
            cout << "target number: " << t << endl;
            while (i < 5)
            {
                cin >> input;
                string result = match(input, t);
                cout << result << endl;
                if (result[0] == '4')
                {
                    cout << "You win!" << endl;
                    break;
                }
                i++;
                if (i == 5) cout << "You lose!" << endl;
            }
        }
        else if (a == 'q')
        {
            exit(0);
        }
    }
}

