#include <bits/stdc++.h>
using namespace std;

void f(int n, int now, int nmax);

string ans = "a";

int main() {
    int n;
    cin >> n;
    
    if (n != 1) f(n, 1, 0);
    else cout << 'a' << endl;
}

void f(int n, int now, int nmax) {
    if (now == n-1) {
        int i = 0;
        while (i <= nmax+1) {
            ans += 'a' + i;
            cout << ans << endl;
            ans = ans.substr(0, now);
            i++;
        }
    } else {
        int j = 0;
        int nmaxnow = nmax;
        while (j <= nmax + 1) {
            ans += 'a' + j;
            if (j == nmax+1) f(n, now+1, j);
            else f(n, now+1, nmax);
            ans = ans.substr(0, now);
            j++;
        }
    }
    return;
}