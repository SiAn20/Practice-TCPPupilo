// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, q, x;
  string ans;
  cin >> n >> q;
  vector<int> v(n);

  for (int &y : v)
    cin >> y;

  while (q--) {
    cin >> x;
    ans = (binary_search(v.begin(), v.end(), x) ? "YES" : "NO");

    cout << ans << endl;
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