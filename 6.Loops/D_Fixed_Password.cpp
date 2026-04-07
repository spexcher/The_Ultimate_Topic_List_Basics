
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 18:12:32
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
    string s;
    while (getline(cin, s))
    {
        ll u = stoll(s);
        if (u == 1999)
        {
            cout << "Correct" << '\n';
            break;
        }
        cout << "Wrong" << '\n';
    }
    return 0;
}