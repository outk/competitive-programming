#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;

    vector<ll> p(a), q(b), r(c);
    for (int i=0; i<a; i++) {
        cin >> p.at(i);
    }

    for (int i=0; i<b; i++) {
        cin >> q.at(i);
    }

    for (int i=0; i<c; i++) {
        cin >> r.at(i);
    }

    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    sort(r.begin(), r.end());

    ll ans, xc=0, yc=0, pm=a-1, qm=b-1, rm=c-1;

    for (int i=0; i<x+y; i++) {
        if (xc < x) {
            if (yc < y) {
                if (pm >= 0) {
                    if (qm >= 0) {
                        if (rm >= 0) {
                            ll m = p.at(pm), f = 0;
                            if (q.at(qm) > m) {
                                m = q.at(qm);
                                f = 1;
                            }
                            if (r.at(rm) > m) {
                                m = r.at(rm);
                                f = 2;
                            }
                            ans += m;
                            if (f == 0) {
                                xc++;
                                pm--;
                            }
                            if (f == 1) {
                                yc++;
                                qm--;
                            }
                            if (f == 2) rm--;
                        } else {
                            ll m = p.at(pm), f = 0;
                            if (q.at(qm) > m) {
                                m = q.at(qm);
                                f = 1;
                            }
                            ans += m;
                            if (f == 0) {
                                xc++;
                                pm--;
                            }
                            if (f == 1) {
                                yc++;
                                qm--;
                            }
                        }
                    } else {
                        if (rm >= 0) {
                            ll m = p.at(pm), f = 0;
                            if (r.at(rm) > m) {
                                m = r.at(rm);
                                f = 2;
                            }
                            ans += m;
                            if (f == 0) {
                                xc++;
                                pm--;
                            }
                            if (f == 2) rm--;
                        } else {
                            ll m = p.at(pm), f = 0;
                            ans += m;
                            if (f == 0) {
                                xc++;
                                pm--;
                            }
                        }
                    } else {
                        
                    }
                }
            }
        }
    }

    cout << ans << endl;
}