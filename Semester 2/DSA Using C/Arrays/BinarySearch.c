// Write the function for binary search algorithm to search an item x in an integer array a of size n.

int BinarySearch(int a[], int n, int x)
{
    int start = 0, end = n, mid;
    mid = (start + end) / 2;
    while ((start <= end) && a[mid] != x)
    {
        if (x > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    if (start > end)
        return -1;
    if (a[mid] == x)
        return mid;
}

/*
-> returns the index of the searched element if the number is available
-> if the element is absent, it returns -1
-> Time Complexity for the function is O(log n) because it cuts the array in half for every iteration.
*/