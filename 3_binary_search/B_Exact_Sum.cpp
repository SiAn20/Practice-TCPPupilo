// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  while (cin >> n) {
    int m, ans1, ans2;
    vector<int> v(n);

    for (int &x : v)
      cin >> x;
    cin >> m;

    // ordenamos y buscamos complementos
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
      if (v[i] > (m / 2))
        break;
      if (binary_search(v.begin() + i + 1, v.end(), (m - v[i]))) {
        ans1 = v[i];
        ans2 = m - v[i];
      }
    }
    cout << "Peter should buy books whose prices are " << ans1 << " and "
         << ans2 << ".\n\n";
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