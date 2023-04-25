#include<iostream>
using namespace std;


class Node{
       
       public:
        int data;
        Node * next;
     	Node(int data){
     		this->data = data;
     		next = NULL;
		 }
		 
};
     
 
class Stack{
	Node *head;
	int size;
	public:
		Stack(){
			head =NULL;
			size = 0;
		}
	
	    bool isEmpty(){
	    	if(head == NULL){
	    		return true;
			} 
			return false;
		}
		
		int top(){
			if(isEmpty()){
				return 0;
			}
			return head->data;
		}
		void push(int ele){
			Node *ne = new Node(ele);
			ne->next=head;
			head=ne;
			size++;
		} 
		
		void pop(){
			Node *temp=head;
			head = head->next;
			temp->next = NULL;
			delete temp;
			size --;
		}
		
			
  };

int main(){
	Stack s;
	s.push(24);
	s.push(50);
	cout<<s.top();
	return 0;
}