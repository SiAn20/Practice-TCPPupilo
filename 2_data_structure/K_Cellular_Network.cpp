// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> city(n), tower(m);
  for (int &x : city)
    cin >> x;
  for (int &x : tower)
    cin >> x;

  int result = 0;

  for (int i = 0; i < n; ++i) {
    int c = city[i];
    // Binary search
    auto it = lower_bound(tower.begin(), tower.end(), c);
    int dist1 = (it != tower.end()) ? abs(c - *it) : INT_MAX;
    int dist2 = (it != tower.begin()) ? abs(c - *(it - 1)) : INT_MAX;

    result = max(result, min(dist1, dist2));
  }

  cout << result << endl;
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
