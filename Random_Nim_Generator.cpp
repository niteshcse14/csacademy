#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define mp make_pair
#define pb push_back
#define ll long long
#define mod 30011
#define lim 65536
#define maxK 65536 + 11
int n, k, i, inv;
int data[maxK];
int ans;

ll poww(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}
void fwht(int data[], int dim) {
    for (int len = 1; 2 * len <= dim; len <<= 1) {
        for (int i = 0; i < dim; i += 2 * len) {
            for (int j = 0; j < len; j++) {
                int a = data[i + j];
                int b = data[i + j + len];
                data[i + j] = (a + b) % mod;
                data[i + j + len] = (mod + a - b) % mod;
            }   
        }
    }
}
int main() {
    scanf("%d%d", &n, &k);
    for (i = 0; i <= k; i++) 
        data[i] = 1;
    fwht(data, lim);
    for (i = 0; i < lim; i++) 
        data[i] = poww(data[i], n);
    fwht(data, lim);
    inv = poww(lim, mod - 2);
    for (i = 1; i < lim; i++) {
        ans += (1LL * data[i] * inv) % mod;
        ans %= mod;
    }
    printf("%d\n", ans);
    return 0;
}