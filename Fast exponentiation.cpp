#define MOD 1000000007
long long fastExp(long long n, long long k) {
    if (k == 0)
    	return 1;
    
    n %= MOD;
    long long temp = fastExp(n, k >> 1);
    if (k & 1)
        return n * temp % MOD * temp % MOD;
    return temp * temp % MOD;
}
