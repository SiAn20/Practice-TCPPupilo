// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

bool isValid(int v, int k, int n) {
  int x = v;
  int kk = k;
  while (v / kk > 0) {
    x += (v / kk);
    kk *= k;
  }
  if (x >= n)
    return true;
  else
    return false;
}

void solve() {
  int n, k, x = 0;
  cin >> n >> k;

  for (int b = n / 2; b >= 1; b /= 2) {
    while (!isValid(x + b, k, n))
      x += b;
  }
  cout << x + 1 << endl;
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