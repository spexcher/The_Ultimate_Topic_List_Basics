
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:11:05
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
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '<')
    {
        if (a < b)
            cout << "Right";
        else
            cout << "Wrong";
    }
    if (c == '=')
    {
        if (a == b)
            cout << "Right";
        else
            cout << "Wrong";
    }
    if (c == '>')
    {
        if (a > b)
            cout << "Right";
        else
            cout << "Wrong";
    }
    return 0;
}