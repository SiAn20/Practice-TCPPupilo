// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int t;
  cin >> t;
  set<pair<int, string>> available;  // sean unicos
  unordered_map<string, int> prices; // para acceder rapido

  int cnt = 1;
  while (t--) {
    int x, z;
    string y;
    cin >> x >> y;

    if (x == 1) {
      cin >> z;
      prices[y] = z;
      available.insert({z, y});

    } else if (x == 2) {
      cin >> z;
      available.erase({prices[y], y});
      prices[y] = z;
      available.insert({z, y});

    } else if (x == 3) {
      auto [price, name] = *available.begin();
      cout << name << " " << cnt << endl;
      available.erase(available.begin());
      prices.erase(name);
    }

    ++cnt;
  }
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/