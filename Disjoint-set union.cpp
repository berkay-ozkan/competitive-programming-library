int* parents;
int parent(int k)
{
    if (parents[k] == k)
        return k;
    return parents[k] = parent(parents[k]);
}
void unite(int a, int b)
{
    a = parent(a);
    b = parent(b);
    parents[a] = b;
}
