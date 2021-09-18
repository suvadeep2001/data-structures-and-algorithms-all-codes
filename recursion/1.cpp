#include<iostream>

using namespace std;

// void fun(int n){       // 0

// 	if (n == 0)   // 0 == 0 
// 	return ;

//     else{
//     	cout<<"Hello World!!"<<endl; // print this statement 

//     	fun(n-1);  // call again the function 
//     	// now n = 0 
//     }

// 	}


int sum(int n ){
    
    if (n < 0)
    {
    	cout<<"Write the number greater than 0"<<endl;
    }
    
    
	if (n == 1)
	{
		return 1; // first 1 natural number sum -- > 1 
	}

	else{
		return n + sum(n - 1);
	}

}


int main(){

    int n = -5;

    cout<<"The Sum is : "<<sum(n);


	return 0;
	}