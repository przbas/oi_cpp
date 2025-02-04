#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char k1, k2;
    int znak;

    cin >> k1 >> k2;
    
    znak = (k1-48)*16;

    if ((int)k2<58)
    {
        znak += (k2-48);
    } else
    {
        znak += (k2-55);
    }
    
    cout << znak << endl << (char)znak << endl;

    return 0;
}
