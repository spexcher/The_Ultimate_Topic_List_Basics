
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:39:34
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
    int n;
    cin >> n;
    int k = 2;
    if (n == 1)
        cout << "-1" << '\n';
    while (k <= n)
    {
        cout << k << '\n';
        k += 2;
    }
    return 0;
}