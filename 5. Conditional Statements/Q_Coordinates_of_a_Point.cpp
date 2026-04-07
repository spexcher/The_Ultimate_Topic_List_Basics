
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:15:53
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
    double a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
        cout << "Q1";
    else if (a < 0 && b > 0)
        cout << "Q2";
    else if (a < 0 && b < 0)
        cout << "Q3";
    else if (a > 0 && b < 0)
        cout << "Q4";
    else if (a == 0 && b == 0)
        cout << "Origem";
    else if (a == 0 && b != 0)
        cout << "Eixo Y";
    else
        cout << "Eixo X";
    cout << '\n';
    return 0;
}