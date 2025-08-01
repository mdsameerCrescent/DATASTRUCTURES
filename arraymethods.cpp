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
	for (int i=0;i>position;--i){
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
	createArr(arr,size);
	cout<<"Before Insertion : "<<endl;
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insert(arr,size,1000,2);
	cout<<"After Insertion: "<<endl;
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	deleteElement(arr,size,5);
	cout<<"After Deletion: "<<endl;
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	
}
}
