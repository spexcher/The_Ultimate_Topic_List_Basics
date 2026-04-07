
// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 07.04.2026 at 13:10:22
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
    double t;
    cin >> t;
    double x = t;
    if (x >= 0 && x <= 25.0000)
        cout << "Interval [0,25]" << endl;
    else if (x >= 25.00001 && x <= 50.0000)
        cout << "Interval (25,50]" << endl;
    else if (x >= 50.00001 && x <= 75.0000)
        cout << "Interval (50,75]" << endl;
    else if (x >= 75.00001 && x <= 100.0000)
        cout << "Interval (75,100]" << endl;
    else
        cout << "Out of Intervals" << endl;
    return 0;
}