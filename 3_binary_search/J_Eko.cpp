// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isvalid(vector<int> &v, int m, int tam) {
  int ans = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > tam)
      ans += v[i] - tam;
  }
  return ans >= m;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);

  for (int &x : v)
    cin >> x;

  int l = 0, r = 1e9 + 1;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    if (isvalid(v, m, mid))
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