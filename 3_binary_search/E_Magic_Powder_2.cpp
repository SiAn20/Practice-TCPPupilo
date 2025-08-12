// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, k, dif = 0;
  cin >> n >> k;
  vector<int> a(n), b(n);

  for (int &x : a)
    cin >> x;
  for (int &x : b)
    cin >> x;

  // iterar por valores
  int l = 0, r = 1e18;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    __int128 magic = 0;
    for (int i = 0; i < n; ++i) {
      __int128 need = (__int128)a[i] * mid - b[i];
      if (need > 0)
        magic += need;
    }
    if (k >= magic)
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
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