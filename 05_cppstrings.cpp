#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "Hello";
    // string str2;
    // cin >> str2;
    // cout << str << " " << str2 << endl;

    // Reversing a string
    // string str;
    // cin >> str;

    // string str_rev;
    // for (int i = str.size() - 1; i >= 0; --i)
    // {
    //     str_rev.push_back(str[i]);
    // }
    // cout << str_rev;

    // checkin whether a string is palindrome or not?
    string str;
    cin >> str;
    string str_rev;
    for (int i = str.size() - 1; i >= 0; --i)
    {
        str_rev.push_back(str[i]);
    }
    cout << str_rev;
    if (str == str_rev)
    {
        cout << "yes string is Palindrome";
    }
    else
    {
        cout << "No";
    }
}