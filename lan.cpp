#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int num, rok;

    cin >> num >> rok;
    
    cout << ((num % 10)*2+5)*50+1764-rok;

    return 0;
}
