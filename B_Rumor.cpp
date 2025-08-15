// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> c(n);
  for (int &x : c) {
    cin >> x;
  }
  if (m == 0){
    cout << accumulate(c.begin(), c.end(), 0) << endl;
    return;
  }
  
    
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