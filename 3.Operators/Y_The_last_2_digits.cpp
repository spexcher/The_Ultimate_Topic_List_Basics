
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 12:48:31
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll n = a % 100 * b % 100 * c % 100 * d % 100;

    ll r = abs(n % 100);
    if (r == 0)
        cout << "00" << '\n';
    else if (r <= 9)
        cout << "0" << r << '\n';
    else
        cout << r << '\n';
    return 0;
}