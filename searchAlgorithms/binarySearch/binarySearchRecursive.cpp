int binarySearchRecursive(int low , int high , int key){
	//smallProblem
	if(low==high){
		if(A[low]==key){
			return low;
		}
		else
		{
			return 0;
		}
	}
	//bigProblem
	
	else
	{
		mid=(low=high)/2;
		if(key==A[mid]){
			return mid;
		}
		if(key<A[mid]){
			return binarySearchRecursive(low, mid-1,key);
		}
		else{

			return binarySearchRecursive(mid+1,high,key);
		}
	}
}