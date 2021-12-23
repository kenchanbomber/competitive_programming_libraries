#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;

struct sieve {
    int n;
    vector<int> fact, primes;
    sieve(int _n): n(_n), fact(_n+1) {
        fact[0] = fact[1] = -1;
        for(long long i = 2; i <= n; i++) {
            if(fact[i]) continue;
            fact[i] = i;
            primes.push_back(i);
            for(long long j = i * i; j <= n; j += i) if(!fact[j]) fact[j] = i;
        }
    }
    bool is_prime(int x) { return fact[x] == x; }
    map<int,int> factorization(int x) {
        assert(0 < x && x <= n);
        map<int,int> res;
        while(x != 1) { res[fact[x]]++; x /= fact[x]; }
        return res;
    }
};

int main() {
    sieve sieve(MAX);
    cout << sieve.is_prime(12) << "\n"; // 0
    cout << sieve.is_prime(17) << "\n"; // 1
    map<int,int> v = sieve.factorization(5000);
    for(auto &[p,c] : v) printf("%d: %d\n", p, c); // 2: 3, 5: 4
    return 0;
}