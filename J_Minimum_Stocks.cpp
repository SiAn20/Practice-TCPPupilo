// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int t, cnt = 1;
  unordered_map<string, int> mp;
  cin >> t;

  while (t--) {
    int x, z;
    string y;
    cin >> x >> y;

    if (x < 3) {
      cin >> z;
      mp[y] = z;
      
    } else {
      auto min_pair =
          *min_element(mp.begin(), mp.end(), [](const auto &a, const auto &b) {
            return a.second < b.second;
          });

      cout << min_pair.first << " " << cnt << endl;
      mp.erase(y);
    }
    ++cnt;
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/