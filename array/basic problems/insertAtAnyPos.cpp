#include <iostream>
using namespace std;

int main()
{
	
	int arr[5] = {
		14,10,18,19,22
	};
	int k = 4 , item = 55;
	for(int i = 4;i >= k ; i--){
		arr[i+1] = arr[i];
	}
	
	arr[k] = item;
	
	for(int j = 0 ; j < 6 ; j++){
		cout<<arr[j]<<" ";
	}
	
    return 0;
}
