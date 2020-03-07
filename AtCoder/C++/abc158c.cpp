#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int ans;

    ans = 10*b;
    bool fin = false;
    while (!fin) {
        if ((ans*8)/100 == a) {
            fin = true;
            break;
        } else {
            ans++;
            if (ans/10 != b) {
                ans = -1;
                fin = true;
                break;
            }
        }
    }

    cout << ans << endl;
}