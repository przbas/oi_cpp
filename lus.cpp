#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 0, l = 0;

    cin >> n;

    while (n > 0)
    {
        l *= 10;
        l += n % 10;
        n /= 10;         
    }
    cout << l << endl;

    return 0;
}
