#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int A, B, a, b, c, d, e, rok, dz, m;

    cin >> rok;

    if (rok<1900)
    {
        A = 23;
        B = 4;
    } else if (rok>=1900 && rok<2100)
    {
        A = 24;
        B = 5;
    } else
    {
        A = 24;
        B = 6;
    }
    
    a = rok % 19;
    b = rok % 4;
    c = rok % 7;
    d = (19*a + A) % 30;
    e = (2*b + 4*c + 6*d + B) % 7;
    
    if ((d + e) < 10)
    {
        dz = 22 + d + e;
        m = 3;
    }
    else
    {
        dz = d + e - 9;
        m = 4;
    }
    
    // wyjątki

    if (d == 29 && e == 6)
    {
        dz -= 7;
    }

    if (d == 28 && e == 6 && a > 10)
    {
        dz -= 7;
    }
    
    cout << dz << " " << m << endl;

    return 0;
}
