#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,m;
    cin >> n >> k >> m;

    int a=0, suma=0;
    for (int i=0; i<n-1; i++) {
        cin >> a;
        suma += a;
    }

    if ((n*m-suma) > k) {
        cout << -1;
    }
    else {
        if ((n*m-suma) < 0) cout << 0;
        else cout << n*m-suma;
    }


}