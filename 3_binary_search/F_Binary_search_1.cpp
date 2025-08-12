// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, q, m, k;
  cin >> n >> q;
  unordered_map<int, int> cnt;

  while (n--) {
    cin >> m;
    cnt[m]++;
  }

  while (q--) {
    cin >> k;
    cout << cnt[k] << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/