// Write the function for linear search algorithm to search an item x in an integer array a of size n.

int LinearSearch(int *a, int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x)
            return i;    
    }
    return -1;
}

/* 
-> returns the index of the searched element if the number is available
-> if the element is absent, it returns -1
-> Time Complexity for the function is O(n) because it searches all n elements in the array during the worst case scenario.
*/