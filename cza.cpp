#include <bits/stdc++.h>
using namespace std;

int main() {
    //cin.tie(0)->sync_with_stdio(0);
    int s;

    cout << "Podaj czas w sekundach\n";
    cin >> s;

    cout << s/3600 << "g";  //dzielenie bez reszty
    s = s%3600;             //reszta z dzielenia to pozostałe sekundy
    cout << s/60 << "m";
    s = s%60;
    cout << s << "s\n";

    return 0;
}
