/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, m, D, sum = 0, u;
  cin >> n >> m;
  queue<int> q;
  map<int, int> dist;
  vector<int> ans;

  while (n--) {
    int x;
    cin >> x;
    q.push(x);
    dist[x] = 0;
  }

  while (ans.size() < m) {
    u = q.front();
    q.pop();

    if (D = dist[u]) {
      ans.push_back(u);
      sum += D;
    }

    if (dist.find(u - 1) == dist.end()) {
      dist[u - 1] = D + 1;
      q.push(u - 1);
    }
    if (dist.find(u + 1) == dist.end()) {
      dist[u + 1] = D + 1;
      q.push(u + 1);
    }
  }
  cout << sum << endl;
  for (int x : ans)
    cout << x << ' ';
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