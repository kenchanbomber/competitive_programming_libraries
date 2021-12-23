# Competitive Programming Libraries

## Number theory (整数論)
A library on number theory.

### make divisors
Nの約数を列挙する。
同時に約数のペアを同時に求めることで高速化。O(√N)

### prime factorization
Nを素因数分解する。
素因数を割れるだけ割りながら求めることで高速化する. O(√N)

### make primes
1以上N以下にある素数を列挙する。
エラトステネスの篩で実装。O(NLogLogN)

### combination
Combinationを求める手法。
Nの制約によって最も適切な方法を選択する。

#### pascals triangle
Nの制約が小さい時に最適。
具体的には1000程度ならばこの方法で対応可能. O(N^2)

#### using inverse element
初期化にO(N)
Combinationのmodを高速に求める。O(1)
Nまでの階乗と階乗の逆元を前計算しておくことで高速に求める。

## Data structure (データ構造)
Library of various data structures.

### union find
Data structure that manages grouping in a tree structure.

### sieve
初期化にO(NLogLogN).
N以下の正整数Kについて素因数分解を高速に行う。O(LogK)
エラトステネスの篩で最も小さい素因数をメモしておくことで高速化。

## Other (未分類)

### run length encoding
One of the data compression algorithms.

## template.cpp
A template file that is described in common to all files.