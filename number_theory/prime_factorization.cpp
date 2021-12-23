#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 素因数分解
map<ll,int> prime_factorization(ll n) {
    map<ll,int> mp;
    for(ll i = 2; i*i <= n; ++i) while(n%i == 0){ mp[i]++; n /= i; }
    if(n > 1) mp[n]++;
    return mp;
}

int main() {
    ll n;
    cin >> n;
    map<ll,int> primes = prime_factorization(n);
    for(auto &p : primes) printf("prime: %lld, cnt: %d\n", p.first, p.second);
    return 0;
}