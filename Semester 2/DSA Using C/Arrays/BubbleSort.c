/*Function for Bubble Sort Algorithm
    time complexity - O(n^2)
    space complexity - O(2) because it takes
    two extra variables, for length and a temp
*/

void BubbleSort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}