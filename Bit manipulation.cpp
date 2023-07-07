#define bitGet(x, i) (x & 1ull << i)
#define bitSet(x, i) (x |= 1ull << i)
#define bitFlip(x, i) (x ^= 1ull << i)
#define bitReset(x, i) (x &= ~bitGet(x, i))
