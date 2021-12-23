#include <bits/stdc++.h>
using namespace std;

vector<int> make_primes(int n) {
    vector<int> is_prime(n+1, 1), res;
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2; (long long)i * i <= n; i++) {
        if(!is_prime[i]) continue;
        for(int j = i * 2; j <= n; j += i) is_prime[j] = 0;
    }
    for(int i = 2; i <= n; i++) {
        if(is_prime[i]) res.push_back(i);
    }
    return res;
}

int main() {
    vector<int> primes_a = make_primes(13); // 2, 3, 5, 7, 11, 13
    for(int &p : primes_a) printf("%d ", p); printf("\n");
    vector<int> primes_b = make_primes(100);
    cout << primes_b.size() << "\n"; // 25
    return 0;
}