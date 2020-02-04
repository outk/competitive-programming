#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        int s;
        cin >> s;

        int ss = s;

        int ans=0;

        int k=0;
        while (ss) {
            ss = ss/10;
            k++;
        }

        while (s)
        {
            int d = 1;
            for (int o=0; o<k-1; o++) d = d*10;
            ans += (s/d)*d;
            s = s - (s/d)*d + ((s/d)*d)/10;
            ss = s;
            k = 0;
            while (ss) {
                ss = ss/10;
                k++;
            }
        }
        
        cout << ans << endl;
    }
}