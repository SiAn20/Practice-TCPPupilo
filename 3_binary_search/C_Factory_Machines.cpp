// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// metodo que compara en cierto tmp que cant se hacen
bool isGenerated(vector<int> &v, int val, int cant) {
  int cnt = 0;
  for (int i = 0; i < v.size(); ++i) {
    cnt += cant / v[i];
    if (cnt >= val)
      return true;
  }
  return (cnt >= val);
}

void solve() {
  int n, t;
  cin >> n >> t;
  vector<int> time(n);
  for (int &x : time)
    cin >> x;

  // buscamos q tiemp cumple
  int l = 0, r = 1e18 + 1;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    if (isGenerated(time, t, mid))
      r = mid;
    else
      l = mid;
  }
  cout << r << endl;
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