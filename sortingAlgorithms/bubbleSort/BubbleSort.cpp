//Utility Swap function 
void swap(int *xp, int *xy){
	int temp=*xp;
	*xp=*xy;
	*xy=temp;
}
//Bubble-Sort
void bubbleSort(int arr[], int n){
	int i , j;
	bool swapped; 
	for(i=0;i<n-1;i++){
		swapped=false;
		for( j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
}