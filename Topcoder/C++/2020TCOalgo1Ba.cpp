#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class EllysCandies
{
    public:
        string getWinner(vector<int> boxes) {
            string ans = "Elly";
            ll n = boxes.size();
            if (n%2 == 0) ans = "Kris";
            return ans;
        }
};