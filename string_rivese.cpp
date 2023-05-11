#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size() / 2; i++)
    {
        char temp = s[i];
        s[i] = s[s.size() - i - 1];
        s[s.size() - i - 1] = temp;
    }
    cout << s << endl;
}