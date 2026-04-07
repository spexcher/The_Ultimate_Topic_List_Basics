
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:09:28
//  Contact      : spexcher@gmail.com
//  Linktree     : https://linktr.ee/spexcher/
//  GitHub       : https://github.com/spexcher/
//  LinkedIn     : https://www.linkedin.com/in/gourabmodak/
//  YouTube      : https://www.youtube.com/@spexcher
//
//  Happy Coding! Build, learn, and ship with confidence.
// ======================================================

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char a;
    cin >> a;
    if (a >= 65 && a <= 90)
        cout << "ALPHA\nIS CAPITAL" << endl;
    else if (a >= 97 && a <= 122)
        cout << "ALPHA\nIS SMALL" << endl;
    else if (a >= 48 && a <= 57)
        cout << "IS DIGIT" << endl;
    return 0;
}