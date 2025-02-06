#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 1; 
    long long sil = 1;

    cin >> n;

    if (n>1)
    {
        for (int i = 1; i <= n; i++)
        {
            sil *= i;
        }
    }
    
    cout << sil << endl;

    return 0;
}
