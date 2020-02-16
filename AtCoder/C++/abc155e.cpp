#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len=s.size();

    int v, nxt=0, ans=0;
    for (int i=0; i<len; i++) {
        v = (int)s.at(len-1-i)-'0';
        if (v+nxt <= 5) {
            if (i != len-1) {
                if (v+nxt == 5) {
                    if ((int)s.at(len-2-i)-'0' >= 5) {
                        ans += 10 - (v+nxt);
                        nxt = 1;
                    } else {
                        ans += v+nxt;
                        nxt = 0;
                    }
                } else {
                    ans += v+nxt;
                    nxt = 0;
                }
            } else {
                ans += v+nxt;
                nxt = 0;
            }

        }
        else {
            ans += 10 - (v+nxt);
            nxt = 1;
        }
    }

    ans += nxt;

    cout << ans << endl;
}