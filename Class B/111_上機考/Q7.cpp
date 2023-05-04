#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    string s;
    regex ds("\\d+");
    regex o("[+\\-*/]");

    while (getline(cin, s))
    {
        string ss = s;
        smatch m1, m2;
        vector<int> nums;
        while (regex_search(s, m1, ds)) 
        {
            for (auto &match : m1)
                nums.push_back(stoi(match));
            s = m1.suffix().str();
        }
        regex_search(ss, m2, o);
        // string sss = m2[0];
        // char c = sss[0];
        char c = ((string) m2[0])[0];
        if (c == '+') cout << nums[0] + nums[1];
        if (c == '-') cout << nums[0] + nums[1];
        if (c == '*') cout << nums[0] + nums[1];
        if (c == '/') cout << nums[0] + nums[1];
    }
}
