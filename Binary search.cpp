int binarySearch(const int* array, unsigned long arraySize, int search)
{
    int start = 0;
    int end = arraySize - 1;

    while (start <= end)
    {
        int middle = start + (end - start) / 2;
        if (array[middle] > search)
            end = middle - 1;
        if (array[middle] < search)
            start = middle + 1;
        if (array[middle] == search)
            return middle;
    }
    return -start - 1;
}

binarySearch(array, arraySize, search);
