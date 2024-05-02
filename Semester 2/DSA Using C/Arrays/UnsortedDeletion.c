// Deleting an element from unsorted array
void unsorted_deletion(int *a, int *n, int k, int x){
	int j = k+1;
	while (j<= *n)
		a[j-1]=a[j++];
	(*n)--;
}