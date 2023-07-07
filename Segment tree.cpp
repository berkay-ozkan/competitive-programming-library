int *arr, *tree;
void build(int ind, int l, int r)
{
    if (l == r)
        tree[ind] = arr[l];
    else
    {
        int mid = l + (r - l) / 2;
        build(ind * 2 + 1, l, mid);
        build(ind * 2 + 2, mid + 1, r);
        // Sum by default
        tree[ind] = tree[ind * 2 + 1] + tree[ind * 2 + 2];
    }
}

int query(int ind, int l, int r, int lw, int rw) {
    if (l >= lw && r <= rw)
        return tree[ind];
    int mid = l + (r - l) / 2;
    if (mid + 1 > rw)
        // Only left partition
        return query(ind * 2 + 1, l, mid, lw, rw);
    else if (mid < lw)
        // Only right partition
        return query(ind * 2 + 2, mid + 1, r, lw, rw);
    else
        // Both partitions, sum by default
        return query(ind * 2 + 1, l, mid, lw, rw) + query(ind * 2 + 2, mid + 1, r, lw, rw);
}

void update(int ind, int l, int r, int x, int val) {
    if (l > x || r < x)
        return;
    if (l == x && r == x)
    {
        tree[ind] = val;
        return;
    }
    int mid = l + (r - l) / 2;
    update(ind * 2 + 1, l, mid, x, val);
    update(ind * 2 + 2, mid + 1, r, x, val);
    // Sum by default
    tree[ind] = tree[ind * 2 + 1] + tree[ind * 2 + 2];
}
