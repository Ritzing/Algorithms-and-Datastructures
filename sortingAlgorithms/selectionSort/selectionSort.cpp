//Utility function to swap 
void swap(int *xp, int *xy){
	int temp=*xp; 
	*xp=*xy;
	*xy=temp;
}
//void selectionSort
void selectionSort(int A[], int n){
	int min; 
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[min]){
				min=j;
			}
		}
		swap(&A[min],A[i]);
	}
}
