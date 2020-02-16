#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    string ans="APPROVED";
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a%2 == 0) {
            if (a%3 != 0 && a%5 != 0) ans = "DENIED";
        }
    }

    cout << ans << endl;
}