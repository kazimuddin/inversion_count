#include <iostream>
#include <vector>
using namespace std;
void add(vector<int>& arr , int n){

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

void display(const vector<int>& arr){ // i used constant because the display function is only to read the vector not to modifies
	cout <<" Displaying the elements of vector " << endl;
	for(int num : arr){
		cout << num;
	}
}
int main(){
	int n; cin >> n;
	vector<int> arr(n);
	add(arr,n);
	display(arr);
	return 0;
}
