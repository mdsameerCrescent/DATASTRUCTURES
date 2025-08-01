#include <iostream>
using namespace std;

int createArray(int arr[],int size){
	for (int i=0;i<=size;i++){
		arr[i]=i*i;
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
int binarySearch(int arr[], int size, int element) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] < element) {
            low = mid + 1;
            
            for (int i = 0; i < high; i++) {  
                if (arr[i] == element) {
                    return i;
                }
            }
        } else {
            high = mid - 1;
          
            for (int i = high; i >= low; i--) { 
                if (arr[i] == element) {
                    return i;
                }
            }
        }
    }
    return -1;
}


int main(){
	int arr[100],size;
	size = 10;
	createArray(arr,size);
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

    int bsearch = binarySearch(arr, size, key);
    if (bsearch != -1) {
        cout << "The Element " << key << " is found at the index of " << bsearch << endl;
    } else {
        cout << "The Element is not found in the array." << endl;
    }
    
    
    return 0;
	
	
}
