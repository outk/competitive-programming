#include <bits/stdc++.h>
using namespace std;

void caluculatoion(int &n, int &ans, int now, vector<int> &c, vector<int> &s, vector<int> &f) {
    if (now < n-1)  {
        if (ans%f.at(now)) {
            if (ans >= s.at(now)) {
                ans = s.at(now) + (((ans-s.at(now))/f.at(now)) + 1) * f.at(now) + c.at(now);
                caluculatoion(n, ans, now+1, c, s, f);
            } else {
                ans = s.at(now) + c.at(now);
                caluculatoion(n, ans, now+1, c, s, f);
            }
        } else {
            if (ans >= s.at(now)) {
                ans += c.at(now);
                caluculatoion(n, ans, now+1, c, s, f);
            } else {
                ans = s.at(now) + c.at(now);
                caluculatoion(n, ans, now+1, c, s, f);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> c(n-1), s(n-1), f(n-1);
    for (int i=0; i<n-1; i++) {
        cin >> c.at(i) >> s.at(i) >> f.at(i);
    }

    int ans=0;

    for (int i=0; i<n-1; i++) {
        ans = 0;
        caluculatoion(n, ans, i, c, s, f);
        cout << ans << endl;
    }

    cout << 0 << endl;
}