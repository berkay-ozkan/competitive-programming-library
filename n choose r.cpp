#define MAXN 100005
#define MOD 1000000007

long long fact[MAXN];
long long inv[MAXN];
long long finv[MAXN];
long long C(int a, int b)
{
    if (a < b || b < 0)
        return 0;
    return fact[a] * finv[b] % MOD * finv[a - b] % MOD;
}

fact[0] = finv[0] = inv[1] = 1;
for (int i = 2; i < MAXN; i++)
    inv[i] = (MOD - (MOD / i) * inv[MOD % i] % MOD) % MOD;
for (int i = 1; i < MAXN; i++)
{
    fact[i] = fact[i - 1] * i % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
}
