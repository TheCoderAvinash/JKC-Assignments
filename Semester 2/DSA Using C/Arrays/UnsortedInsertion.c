// Insertion Operation in unsorted arrays 

// 1.using while loops
void insertWhile(int *a, int *n, int k, int x){
	int i;
	i=(*n)-1;
	while(i>=k){
	a[i+1]=a[i++];
	}
	a[k]= x;
	(*n)++;
}

// 2. using for loops
void insertFor(int *a, int *n, int k, int x){
	int i = (*n)-1;
	for(i;i<=k;i--)
		a[i+1]=a[i];
	a[k] = x;
	(*n)++;
}