#include <bits/stdc++.h>
using namespace std;

int main() {
    long long h;
    cin >> h;

    int i=0;
    long long ans=1;
    while (h) {
        h = h/2;
        ans = ans*2;
    }
    cout << ans - 1 << endl;
}