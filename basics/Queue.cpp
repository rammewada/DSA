#include<bits/stdc++.h>

using namespace std;

class Queue{
	int *data;
	int firstIndex;
	int nextIndex;
	int capacity;
	int size;
public:
	Queue(int s){
         data=new int[s];
         nextIndex=0;
         firstIndex=-1;
         capacity=s;
         size=0;
	}
    
    int getSize(){
        return size;
    }
    bool isEmpty(){
    	return size==0;
    }

	void enqueue(int el){
		if(size==capacity){
            cout<<"Queue is full :)"<<endl;
            return;
		}

		data[nextIndex]=el;
		nextIndex=(nextIndex+1)%capacity;
	    if(firstIndex==-1) firstIndex=0;
	    size++;
	    }
	

	int dequeue(){
		if(isEmpty()){
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		int ans=data[firstIndex];
		firstIndex=(firstIndex+1)%capacity;
		size--;

		if(size==0){
			firstIndex=-1;
			nextIndex=0;
		}

		return ans;
	}

	int front(){
		if(isEmpty()){
			cout<<"Queue is empty:)"<<endl;
			return 0;
		}	 
	  	return data[firstIndex];
	}

};

int main(){
	   
    Queue q=Queue(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
 cout<<q.front()<<endl;
 cout<<"POP:"<<q.dequeue()<<endl;
 cout<<q.front()<<endl;
      q.dequeue();
      q.enqueue(90);
      cout<<q.front()<<endl;
      cout<<q.getSize();
  
     

    return 1;
} 