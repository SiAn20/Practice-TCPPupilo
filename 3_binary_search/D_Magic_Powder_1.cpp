// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);

  for (int &x : a)
    cin >> x;
  for (int &x : b)
    cin >> x;

  // iterar por valores
  int l = 0, r = 1e4;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    int magic = 0;
    for (int i = 0; i < n; ++i) {
      magic += max(0, mid * a[i] - b[i]); // calculamos cuanto k para ese mid
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