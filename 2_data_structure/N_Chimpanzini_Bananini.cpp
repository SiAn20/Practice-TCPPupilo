// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'
using ll = long long;

void solve() {
  int q;
  if (!(cin >> q))
    return;
  deque<ll> dq;
  int rev = 0;
  ll sum = 0;
  ll ans = 0;

  while (q--) {
    int s;
    cin >> s;

    if (s == 1) { // mover último al inicio
      if (!dq.empty()) {
        ll c = rev ? dq.front() : dq.back();
        ans += sum - c * (ll)dq.size();

        if (rev) {
          dq.push_back(c);
          dq.pop_front();
        } else {
          dq.push_front(c);
          dq.pop_back();
        }
      }

    } else if (s == 2) { // invertir la vista
      rev ^= 1;
      ans = sum * ((ll)dq.size() + 1) - ans;

    } else { // insertar valor al final
      ll k;
      cin >> k;
      if (rev)
        dq.push_front(k);
      else
        dq.push_back(k);
      sum += k;
      ans += k * (ll)dq.size();
    }

    cout << ans << end;
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