// Write the function for binary search algorithm using recursion.
//Let a be the array, m be the lower bound, n be the upper bound, and x be the searched item.

int BinarySearchRecursion(int *a, int m,int n, int x){
    int start = m, end =n,mid;
    mid =(start+end)/2;
    if(start<=end && a[mid]!=x){
        if(x>a[mid])    
            start = mid+1;
        else
            end = mid-1;
        BinarySearchRecursion(a,start,end,x);        
    }
    else if (start>end)
        return -1;
    else 
        return mid;
}

/*
-> returns the index of the searched element if the number is available
-> if the element is absent, it returns -1
-> Time Complexity for the function is O(log n) because it cuts the array in half for every iteration.
*/