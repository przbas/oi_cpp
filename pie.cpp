#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 0;
    long x = 0;

    cin >> n >> x;

    long notowania[n];

    int d = -1; //dzień wystąpienia

    for (int i = 0; i < n; i++)
    {
        cin >> notowania[i];
    }
    
    int czy_pierwsze_wystapienie = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == notowania[i])
        {
            d = i + 1;
            if (czy_pierwsze_wystapienie == 0)
            {
                cout << d << " ";
                czy_pierwsze_wystapienie = 1;
            }            
        }
    }

    if (d == -1)
    {
        cout << d << " ";
    }
    
    cout << d << endl;

    return 0;
}
