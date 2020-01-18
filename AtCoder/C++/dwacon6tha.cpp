#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);

    vector<int> t(n);

    for (int i=0; i<n; i++) {
        cin >> s.at(i) >> t.at(i);
    }

    string x;
    cin >> x;

    int a=0;

    for (int i=0; i<n; i++){
        if (s.at(i) == x) {
            a = i+1;
            break;
        }
    }

    int ans=0;
    if (a<n) {
        for (int i=a; i<n; i++) {
            ans += t.at(i);
        }
    }

    cout << ans << endl;

}