#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, k, ile=0;

    cin >> a >> b >> k;

    if (b>=k)
    {
        ile = a / k;
    }
    
    if (b/k>=2 && a>=k && b>=k)
    {
        ile = ile*2;
        if (a/k==1)
        {
            ile = ile + ((b-2*k)/k);
        }else
        {
            ile = ile + 2*((b-2*k)/k);
        }
    }
    
    cout << ile;

    return 0;
}
