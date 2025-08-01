#include <iostream>
using namespace std;

int createArray(int arr[],int size){
	for (int i=0;i<=size;i++){
		arr[i]=(i)*10;
	}
}

int linearSearch(int arr[],int size,int element){
	for (int i =0;i<=size;i++){
		if (arr[i] == element){
			return i;
		}
	}
	return -1;
}


int main(){
	int arr[100],size;
	size = 10;
	
	createArray(arr,size);
	cout<<"LINEAR SEARCH: "<<endl;
	
	cout<<"Array:"<<endl;
	for (int i = 1;i<=size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int key;
	cout<<"Enter The Element to search: ";
	cin>>key;	
	
	
	int lsearched = linearSearch(arr, size, key);
    if (lsearched != -1) {
        cout << "The Element " << key << " is at the index of " << lsearched << endl;
    } else {
        cout << "The Element Not Found." << endl;
    }


    
    
    return 0;
	
	
}
