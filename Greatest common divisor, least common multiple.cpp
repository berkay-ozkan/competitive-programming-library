long long gcd(long long n, long long m)
{
    while (n != 0)
    {
        long long temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

long long lcm(long long n, long long m){
    return n * m / gcd(n,m);
}
