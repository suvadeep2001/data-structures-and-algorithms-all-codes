#include <iostream>
using namespace std;
 
int bubble_sort(int arr[],int size){
	for(int i = 0 ; i < size-1 ; i++){
	for(int j = 0 ; j < size-1 ; j++)	{
	
	if(arr[j] > arr[j+1])
{
	arr[j] = arr[j] + arr[j+1];
	
	arr[j+1] = arr[j] - arr[j+1];
	
	arr[j] = arr[j] - arr[j+1];
		
}			
	}      
}
}  
 
void printArray(int arr[],int size){
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<<" ";
	}
}  
  
  
int main()
{
	
	int arr[5] = {
	20,10,50,80,40
	};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr,size);
	printArray(arr,size);
    return 0;
}
