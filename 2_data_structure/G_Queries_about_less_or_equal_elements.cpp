// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define N '\n'

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);

  // lleno mis vectores
  for (int &x : a)
    cin >> x;
  for (int &x : b)
    cin >> x;

  // recorremos vector b e imprimimos cant de <=
  sort(a.begin(), a.end());
  for (int x : b)
    cout << upper_bound(a.begin(), a.end(), x) - a.begin() << " ";
  cout << N;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/