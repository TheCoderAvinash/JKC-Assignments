// Deleting an element from unsorted array
void unsorted_deletion(int *a, int *n, int k, int x){
	int i = (*n)-1;
	for(k=k-1;k<i;k++)
		a[k]=a[k+1];
	(*n)--;
}