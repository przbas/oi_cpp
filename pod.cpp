#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, k, ile;

    cin >> a >> b >> k;
    
    ile = b/k;
    ile -= a/k;

    if (a%k==0)
    {
        ile++;
    } 
    
    cout << ile << endl;

    return 0;
}
