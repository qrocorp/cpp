#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    cin >> c;

    const string vowel = "aeiou";
    cout << (vowel.find(c) == string::npos ? "consonant" : "vowel") << endl;
    /*
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
*/
}