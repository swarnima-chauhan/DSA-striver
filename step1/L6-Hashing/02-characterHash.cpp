#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int l = s.size();

    int h[26] = {0};
    for (int i = 0; i < l; i++)
    {
        h[s[i] - 'a']++;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        char ch;
        cout << "Enter the character : ";
        cin >> ch;
        cout << ch << " appears " << h[ch - 'a'] << " times\n";
    }
    return 0;
}