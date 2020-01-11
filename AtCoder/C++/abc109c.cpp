#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  int c=0;
  while (a%b) {
    c = a%b;
    a = b;
    b = c;
  }
  return b;
}

int main() {
  int n=0, X=0, ans=0;
  cin >> n >> X;
  
  vector<int> vec(n+1);
  
  for (int i=0; i<n; i++) {
    cin >> vec.at(i);
  }
  
  vec.at(n) = X;
  
  sort(vec.begin(), vec.end());
  
  int big=0, small=0;
  if (vec.size() > 2) {
    if (vec.at(1)-vec.at(0) > vec.at(2)-vec.at(1)) {
      big = vec.at(1)-vec.at(0);
      small = vec.at(2)-vec.at(1);
    } else {
      big = vec.at(2)-vec.at(1);
      small = vec.at(1)-vec.at(0);
    }

    ans = gcd(big, small);

    for (int i=3; i<n+1; i++) {
      if (vec.at(i)-vec.at(i-1) > ans) ans = gcd(vec.at(i)-vec.at(i-1), ans);
      else ans = gcd(ans, vec.at(i)-vec.at(i-1));
    } 
  } else {
    ans = vec.at(1) - vec.at(0);
  }
  
  cout << ans << endl;
  
}