#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int p;
    string s;
    vector<bool> answered(n, false);
    vector<int> was(n, 0);

    int account=0;
    int sumwacount=0;

    for (int i=0; i<m; i++) {
        cin >> p >> s;

        if (!(answered.at(p-1))) {
            if (s == "AC") {
                answered.at(p-1) = true;
                account++;
            }
            else {
                was.at(p-1)++;
            }
        }
    }

    for (int i=0; i<n; i++) {
        if (answered.at(i)) sumwacount += was.at(i);
    }

    cout << account << ' ' << sumwacount;
}