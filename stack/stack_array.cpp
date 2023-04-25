#include<iostream>
using namespace std;

//Implementing stack using array 

//I'm going to do size() , isEmpty() , top() , isFull() , push() , pop() 

class Stack{
	int *arr;
	int nextIndex;
	int capacity;
	
	public:
		Stack(){
			nextIndex =0;
			capacity=5;
			arr = new int[capacity];
		}
		
		Stack(int cap){
			nextIndex=0;
			arr = new int[cap];
		}
		
		//starting function here
		
		int size(){
			return nextIndex;
		}
		bool isEmpty(){
			if(nextIndex == 0){
				return true;
			}
			else{
				return false;
			}
		}
		
		int top(){
			if(isEmpty() == true){
				cout<<"The array is underFlow";
				return 0;
			}
			return arr[nextIndex-1];
		}
		
//		void push(int ele){
//			if(size() == capacity){
//				cout<<"Array overFlow";
//			}
//			else{
//				arr[nextIndex] = ele;
//				nextIndex++;
//			}
//		}
		
		//on our push method we can modift it by removing size constrains
		void push(int ele){
			if(size() == capacity){
				int *newArr = new int[2*capacity];
				for(int i=0 ; i < capacity ; i++){
					newArr[i] = arr[i];
				}
				delete []arr;
				arr = newArr;
				capacity = 2*capacity;
			}
			
			arr[nextIndex] = ele;
			nextIndex ++;
		}
		void pop(){
			if(isEmpty() == true){
				cout<<"Underflow";
			}
			nextIndex--;
		}
};



//main function
int main(){
	Stack stack ;
	stack.push(10);
	stack.push(20);
	stack.pop();
	cout<<stack.top();
}