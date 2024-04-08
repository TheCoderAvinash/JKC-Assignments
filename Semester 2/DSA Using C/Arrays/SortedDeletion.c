// Deleting an element from sorted array
void sortedDeletion(int *a, int *n, int x){
	int i = (*n)-1;
	for(j=0;j<i;j++){
		if(a[j]>=x)
			a[j]=a[j+1];
	}
	(*n)--;
}
