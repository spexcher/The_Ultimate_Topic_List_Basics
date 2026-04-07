
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 18:13:29
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

// Loops
#define ff(i, k, n) for (int i = k; i <= n; i++)
#define fr(i, k, n) for (int i = k; i >= n; i -= 1)
#define rep(i, k, n, s) for (int i = k; i <= n; i += s)
#define per(i, k, n, s) for (int i = k; i >= n; i -= s)
int main()
{
    int n;
    cin >> n;
    ff(i, 1, 12)
    {
        cout << n << " * " << i
             << " = " << (n * i) << '\n';
    }
    return 0;
}