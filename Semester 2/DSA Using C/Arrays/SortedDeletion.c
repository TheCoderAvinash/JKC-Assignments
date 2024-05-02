// Deleting an element from sorted array

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

void sortedDeletion(int *a, int *n, int x){
	int j,k;
	k = BinarySearchRecursion(a,0,*n-1,x);
	if(k==-1){
		printf("Element does not exists");
		return;
	}
	j=k+1;
	while(j<=*n)
		a[j-1]=a[j++];
	(*n)--;
}
