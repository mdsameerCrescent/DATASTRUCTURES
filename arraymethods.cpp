#include <iostream>
using namespace std;

void createArr (int arr[],int size){
	for (int i = 0;i<=size;i++){
		arr[i]=(i+1)*10;
	}
}

void insert(int arr[],int size,int element,int position){
	if (position <0||position>size){
		cout<<"Invalid position"<<endl;
	}
	for (int i=size;i>position;--i){
		arr[i] = arr[i-1];
	}
	arr[position] = element;
	size++;
}

void deleteElement(int arr[],int size,int position){
	for (int i = position;i<size;i++){
		arr[i] = arr[i+1];
		size--;
	}
	
}

int main(){
	int arr[100];
	int size = 10;
	int insertitem,pos,posremove;
	createArr(arr,size);
	cout<<"Created Array : "<<endl;
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Enter The Value to Insert: ";
	cin>>insertitem;
	cout<<"Enter The position to insert: ";
	cin>>pos;
	insert(arr,size,insertitem,pos
	);
	cout<<"After Insertion: "<<endl;
	for (int i=0;i<size+1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Enter The Postion to remove: ";
	cin>>posremove;
	deleteElement(arr,size,posremove);
	cout<<"After Deletion: "<<endl;
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	
}
}
