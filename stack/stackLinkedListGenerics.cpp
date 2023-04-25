#include<iostream>
using namespace std;

template <typename T>

class Node{
       
       public:
        T data;
        Node<T> * next;
     	Node(int data){
     		this->data = data;
     		next = NULL;
		 }
		 
};
     
 template <typename T>
class Stack{
	Node<T> *head;
	T size;
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
		
		T top(){
			if(isEmpty()){
				return 0;
			}
			return head->data;
		}
		void push(int ele){
			Node<T> *ne = new Node<T>(ele);
			ne->next=head;
			head=ne;
			size++;
		} 
		
		void pop(){
			Node <T>*temp=head;
			head = head->next;
			temp->next = NULL;
			delete temp;
			size --;
		}
		
			
  };

int main(){
	Stack <int>s;
	s.push(24);
	s.push(50);
	cout<<s.top();
	return 0;
}
