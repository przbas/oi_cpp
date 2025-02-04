#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 0, pom = 0, npom = 0;

    while (npom >= 0)
    {
        cin >> npom;
        if (npom > pom)
        {
            n++;
            pom = npom;
        }        
    }
    cout << n << endl;

    return 0;
}
