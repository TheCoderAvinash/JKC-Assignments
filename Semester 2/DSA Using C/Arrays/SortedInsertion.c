// Insertion Operation in sorted arrays

void sortedInsert(int *a, int *n, int x){
	int i = (*n)-1;
	while(a[i]>x && k>=0) //the array is in ascending order.
		a[i+1]= a[i--];
	a[i+1] = x;
	(*n)++;
}