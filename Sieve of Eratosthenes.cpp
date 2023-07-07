bool sieve[n]; memset(sieve, true, n * sizeof(bool));
sieve[0] = sieve[1] = false;
for (int i = 2; i * i <= n; i++)
    if (sieve[i])
        for (int j = i * i; j < n; j += i)
            sieve[j] = false;
