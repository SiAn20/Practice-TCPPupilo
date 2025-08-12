// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, m, x, pos;
  cin >> n >> m;
  vector<int> a(n);

  for (int &y : a)
    cin >> y;

  sort(a.begin(), a.end());

  while (m--) {
    cin >> x;
    pos = upper_bound(a.begin(), a.end(), x) - a.begin();
    cout << pos << " ";
  }
  cout << endl;
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