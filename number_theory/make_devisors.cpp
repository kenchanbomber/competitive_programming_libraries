#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Sorts divisors in ascending order and returns
// 約数列挙
vector<ll> make_devisors(ll n) {
    vector<ll> res, upper;
    for(ll k = 1; k * k <= n; k++) if(n%k == 0) { res.push_back(k); if(k * k != n) upper.push_back(n/k); }
    res.insert(res.end(), upper.rbegin(), upper.rend());
    return res;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> divs = make_devisors(n);
    for(ll &div : divs) cout << div << "\n";
    return 0;
}