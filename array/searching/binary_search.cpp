#include <iostream>
using namespace std;
  
int binary_search(int arr[],int size,int element){
	
	int first = 0,last = size-1;
	
	while(last >= first){
		int mid = (last + first) / 2;
		
		if(arr[mid] == element){
			return mid;
		}	else if(arr[mid] < element){
			first = mid + 1;
		}
		else{
			last = mid - 1;
		}
	}
	return -1;
	
}
  
  
int main()
{
	int arr[5] = {
	
	14,10,15,20,89
	
	};	
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout<<binary_search(arr,size,20);
	
    return 0;
}
