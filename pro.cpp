#include <bits/stdc++.h>
using namespace std;

int main() {
    //cin.tie(0)->sync_with_stdio(0);
    int a, b, c;

    cout << "Podaj wymiary prostopadłościanu\n";
    cin >> a >> b >> c;

    cout << a * b * c << "\n";
    cout << 2 * (a * b) + 2 * (a * c) + 2 * (b * c)<< "\n";

    return 0;
}
