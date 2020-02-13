#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        unsigned long long n,g,b;
        cin >> n >> g >> b;

        unsigned long long ans=0;

        if (g >= b) {
            ans = n;
        } else {
            if (n%g) {
                if ((b-g)*(n/g)/2 >= (n%g)) {
                    ans = g*(b-g)*(n/g)/2 + g;
                } else {
                    ans = g*(b-g)*(n/g)/2 + g + ((n%g)-(b-g)*(n/g)/2);
                }
            } else {
                unsigned long long d = (n/g)/2 - 1;
                if (d*(b-g) >= g) {
                    ans = d*(g+b) +g;
                } else {
                    ans = d*(g+b) + g + (g-d*(b-g));
                }
            }
        }

        cout << ans << endl;
    }
}