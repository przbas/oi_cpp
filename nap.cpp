#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long n = 1; 

    cin >> n;

    int liczby[n];

    for (long i = 0; i < n; i++)
    {
        cin >> liczby[i];
    }
    
    for (long i = 0; i < n; i += 2)
    {
        cout << liczby[i] <<" ";
    }

    cout << endl;

    for (long i = 1; i < n; i += 2)
    {
        cout << liczby[i] << " ";
    }

    cout << endl;

    return 0;
}
