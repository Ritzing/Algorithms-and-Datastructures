//C++ code to search for 'x' in array arr 
//if present it returns the position in the array
//else returns -1
//complexity O(n)
int linearSearch(int arr[], int size , int x){
	int i; 
	for(i=0;i<n;i++){
		if(arr[i]==x)
			return i;
	}

	return -1;
}