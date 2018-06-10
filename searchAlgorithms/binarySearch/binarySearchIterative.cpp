int binarySearch(int A[] , int n , int key){
	int low=1;
	int high=n;
	while(low<high){
		mid=(low+high)/2;
		if(key==A[mid]){
			return mid;
		}
		if(key<A[mid]){
		 high=mid-1;
		}
		if(key>A[mid]){
			low=mid-1;
		}
	}
	return 0;
}