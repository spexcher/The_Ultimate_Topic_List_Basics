
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:16:32
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
#define all(x) begin(x), end(x)
int main()
{
    vector<ll> v(3);
    for (ll &x : v)
        cin >> x;
    vector<ll> s(all(v));
    sort(all(s));
    for (ll x : s)
        cout << x << '\n';
    cout << '\n';
    for (ll x : v)
        cout << x << '\n';
    cout << '\n';
    return 0;
}