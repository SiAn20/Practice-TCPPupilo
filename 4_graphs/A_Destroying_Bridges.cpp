// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, k;
  cin >> n >> k;
  if (k > n - 2) {
    cout << 1 << endl;
  } else {
    cout << n << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/