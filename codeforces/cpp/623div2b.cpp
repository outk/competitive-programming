#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int a,b,p;
        cin >> a >> b >> p;

        string s;
        cin >> s;

        int n=s.size(), i=n-1, cost=0;

        if (s.at(n-2) == 'B') cost = b;
        else cost = a;

        if (p >= cost) {
            i--;
            while (i > 0) {
                if (s.at(i) != s.at(i-1)) {
                    if (s.at(i-1) == 'B') cost += b;
                    else cost += a;
                }
                if (p < cost) break;
                else i--;
            }
        }

        

        cout << i + 1 << endl;
    }
}