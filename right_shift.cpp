#include<iostream>
using namespace std;

int main(){
	
	int size;
	cout << "Enter your array size: ";
	cin >> size;
	int arr[size], temp=0;
	cout << "Enter array elements" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	cout << endl << "After Right Shifting: ";      // 1 2 3 4 5   =>  5 1 2 3 4
	temp = arr[size-1];
	for(int i=size-1; i>=0; i--){
		arr[i+1] = arr[i];
	}
	arr[0] = temp;
	
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	

	return 0;
}
