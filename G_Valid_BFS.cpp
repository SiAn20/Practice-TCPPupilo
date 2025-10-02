/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> cam(n);
  vector<vector<int>> gr(n);

  for (int i = 0; i < (n - 1); ++i) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    gr[a].push_back(b);
    gr[b].push_back(a);
  }
  for (int &x : cam)
    cin >> x;

  for (int i = 0; i < (n - 2); ++i) {
    if (find(gr[cam[i]].begin(), gr[cam[i]].end(), cam[i + 1]) == gr[cam[i]].end()) {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
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