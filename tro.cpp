#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c;

    cin >> a >> b >> c;

    if (a-(b+c)<0 && b-(a+c)<0 && c-(a+b)<0)
    {
        cout << "TAK";
    } else
    {
        cout << "NIE";
    }
    
    return 0;
}
