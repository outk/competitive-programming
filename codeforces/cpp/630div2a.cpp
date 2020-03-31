#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int i=0; i<t; i++) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        
        if (x2-x1 == 0 && ( a > 0 || b > 0)) {
            cout << "No" << endl;
        } else if (y2-y1 == 0 && ( c > 0 || d > 0)) {
            cout << "No" << endl;
        } else {
            if (a-b >= 0) {
                if (c-d >= 0) {
                    if (x-x1 >= a-b && y-y1 >= c-d) {
                        cout << "Yes" << endl;
                    } else {
                        cout << "No" << endl;
                    }
                } else {
                    if (x-x1 >= a-b && y2-y >= d-c) {
                        cout << "Yes" << endl;
                    } else {
                        cout << "No" << endl;
                    }
                }
            } else {
                if (c-d >= 0) {
                    if (x2-x >= b-a && y-y1 >= c-d) {
                        cout << "Yes" << endl;
                    } else {
                        cout << "No" << endl;
                    }
                } else {
                    if (x2-x >= b-a && y2-y >= d-c) {
                        cout << "Yes" << endl;
                    } else {
                        cout << "No" << endl;
                    }
                }
            }
        }
            
    }
}