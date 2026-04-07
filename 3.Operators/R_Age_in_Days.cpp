
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 12:46:47
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
    int n, d;
    cin >> d;
    n = d;
    cout
        << (n / 365) << " years\n";
    n -= floor(n / 365) * 365;

    cout << (n / 30) << " months\n";
    n -= floor(n / 30) * 30;

    cout << (n) << " days\n";
    return 0;
}