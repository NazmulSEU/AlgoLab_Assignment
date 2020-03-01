#include<iostream>
using namespace std;

int main(){
	
	int size;
	cout << "Enter your array size: ";
	cin >> size;
	int arr[size][size], count=0;
	cout << "Enter array elements" << endl;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(arr[j][i] != arr[i][j]){
				count ++;
			}
		}
	}
	cout << endl;
	if(count==0){
		cout << "Given matrix is symmetric." << endl;
	}
	else{
		cout << "Given matrix is not symmetric." << endl;
	}
	
	return 0;
}
