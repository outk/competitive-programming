#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, tmpn;
    cin >> n;

    tmpn = n;

    map<ll,ll> divmap;
    for (int i=2; i<=sqrt(n); i++) {
        if (tmpn%i == 0 && tmpn/i > 0) {
            bool divided = true;
            while (divided) {
                tmpn = tmpn / i;
                if (divmap..find())
                if (tmpn%i == 0 && tmpn/i > 0) {
                    divided = true;
                } else {
                    divided = false;
                }
            }
        } 
    }

}