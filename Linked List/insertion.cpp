#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node* link;
};

// printing all the elements 

void traverse(struct Node* node){
	while(node != NULL){
		cout<<node->data<<"->";
		node = node->link;
	}
}

//Inserting a node at the begining 

struct Node* InsertAtFirst(struct Node* head,int new_data){
	
	// make a pointer 
	struct Node* ptr;
	//allocate the memory dinamically
	ptr = new Node();
	//insert the data
	ptr->data = new_data;
	//link the node with the head
	ptr->link = head;
	return ptr;
}

// insert a node at the end

void Insert_At_End(struct Node* head , int new_data){
	
	// make a pointer and allocate the memory dinamically
	
	struct Node* ptr = new Node();
	
	// insert the data
	ptr->data = new_data;
	//link part will be null as this is the last element
	ptr->link = NULL;
	
	if(head == NULL){
		head = ptr;
	}
	
	struct Node* temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = ptr;
}

void InseertAtGivenPosition(Node* prev_node , int new_data ){
	
	if(prev_node == NULL){
		cout<<"prevoius node can't be null";
		return;
	}
// allocate the memory for new node


	Node* new_node = new Node();
    
	//push the data in the node 
	
	new_node->data = new_data;
	
	new_node->link = prev_node->link;
	
	prev_node->link = new_node;



}

int main(){
	
	// create nodes 
	
    struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	//allocate memory dinamically
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	// filling the nodes with values
	
	head->data = 14;
	head->link = second;
	
	second->data = 15;
	second->link = third;
	
	third->data = 16;
	third->link = NULL;
	
	head =InsertAtFirst(head,20);
	
	Insert_At_End(head,56);
	
	InseertAtGivenPosition(head->link , 50);
	
	traverse(head);
	
	return 0;
}
