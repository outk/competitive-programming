#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll k;
    cin >> k;

    string s;
    cin >> s;

    if (s.size() <= k) {cout << s << endl;}
    else {cout << s.substr(0, k) << "..." << endl;}
}