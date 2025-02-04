#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, l = 1;

    cin >> n;

    while (n >= l)
    {
        cout << l << endl;
        l *= 2;
    }

    return 0;
}
