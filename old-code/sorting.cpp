#include<iostream>

using namespace std;

// void selectionSort(int arr[],int n){

//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       if(arr[j]<arr[i]) swap(arr[i],arr[j]); 
//     }
//   }
// }

// void insertionSort(int arr[],int n){
//   for(int i=1;i<n;i++){
   
//    int j=i-1;
//    int key=arr[i];
//    while(arr[j]>key && j>=0){
     
//       arr[j+1]=arr[j];
//       j--;
    
//      }
//      arr[j+1]=key;
//    }

//   }

// void bubbleSort(int arr[], int n){
//   for(int i=n-1;i>0;i--){
   
//    for(int j=0;j<i;j++){
//     if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//    }
//   }
// }

// void print(int arr[],int n){
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
// }
// int main(){
	      
// 	      int arr[]={23,4,21,52,53,24,22,45,9,11,14};

// 	      int n=sizeof(arr)/sizeof(arr[0]);
// 	      // selectionSort(arr,n);
// 	      // bubbleSort(arr,n);
// 	      insertionSort(arr,n);
//           print(arr,n);

//           return 0;
// }







class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		next=nullptr;
	}
};
 
void addNode(Node* head,int data){
 Node* temp=head;
 Node* newNode=new Node(data);

 while(temp->next!=nullptr){
 	temp=temp->next;
 }
 temp->next=newNode;
}

void print(Node* head){
	Node* temp=head;
	cout<<temp->data;

	// while(temp!=NULL){
	// 	cout<<temp->data<<" "; 
	// } 
}

int main(){
	Node* head=new Node(10);
	
	 addNode(head,20);
	 addNode(head,30);
	 addNode(head,40);
	 addNode(head,50);

    // print(head);
	cout<<head->data;
	return 0;
}