
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:19:58
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
    ll a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;
    if (x == '+')
    {
        if (a + b == c)
            cout << "Yes" << '\n';
        else
            cout << a + b << '\n';
    }
    if (x == '-')
    {
        if (a - b == c)
            cout << "Yes" << '\n';
        else
            cout << a - b << '\n';
    }
    if (x == '*')
    {
        if (a * b == c)
            cout << "Yes" << '\n';
        else
            cout << a * b << '\n';
    }
    return 0;
}