#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, y;

    cin >> x >> y;

    if (x==0 && y==0)
    {
        cout << 0;
    } else if (x==0)
    {
        cout << "OY";
    } else if (y==0)
    {
        cout << "OX";
    } else if (x>0)
    {
        if (y>0)
        {
            cout << "I";
        } else
        {
            cout << "IV";
        }
    } else if (x<0)
    {
        if (y>0)
        {
            cout << "II";
        } else
        {
            cout << "III";
        }
    }
    
    return 0;
}
