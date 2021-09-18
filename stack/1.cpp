#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int>s;

	s.push(14);
	s.push(15);
	s.push(16);
	s.push(17);
    
    // popped out the last element

    s.pop();

       
    // peek element found

    cout<<s.top()<<endl;
    

    // stack is empty or not

    cout<<s.empty()<<endl; 

    while(!s.empty()){
cout<<s.top()<<" ";
s.pop();
    }

	return 0;
}