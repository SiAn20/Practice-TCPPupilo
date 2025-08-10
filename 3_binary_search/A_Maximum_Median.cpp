// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);

  for (int &x : v)
    cin >> x;

  sort(v.begin(), v.end());
  int l = v[n / 2], r = l + k + 1;

  while (l + 1 < r) { // buscamos la media
    int mid = l + (r - l) / 2, sum = 0;

    for (int i = n / 2; i < n; ++i) { // vemos cuanto k necesita para esa media
      sum += max(0LL, mid - v[i]);
    }
    if (sum > k)
      r = mid;
    else
      l = mid;
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