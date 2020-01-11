#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char>> arr(4, vector<char>(4));
  
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      cin >> arr.at(i).at(j);
    }
  }
  
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      cout << arr.at(3-i).at(3-j);
      if ((j+1)%4 == 0) cout << endl;
      else cout << ' ';
    }
  }
}