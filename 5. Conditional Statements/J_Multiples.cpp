
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:09:02
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
    ll a, b;
    cin >> a >> b;
    (a % b == 0 or b % a == 0) ? cout << "Multiples" : cout << "No Multiples";
    return 0;
}