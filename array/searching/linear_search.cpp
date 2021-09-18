#include <iostream>
using namespace std;

int linear_search(int arr[],int size , int element){
	
	for(int i = 0 ; i < size; i++){
		if(arr[i] == element){
			return i;
		}
	}
	
	return -1;
	
}

int main()
{
	int arr[5] = {
		14,10,15,16,18
	};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout<<linear_search(arr,size,16); // ans is 3
	
    return 0;
}
