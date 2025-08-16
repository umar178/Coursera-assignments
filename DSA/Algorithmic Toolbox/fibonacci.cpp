#include<iostream>
using namespace std;

void fibonacci(int n){
	unsigned long long arr[n];
	
	if(n <= 1){cout<<n; return;}
	else{
		arr[0] = 1;
		arr[1] = 1;
		
		for(int i = 2; i < n; i++){
			arr[i] = arr[i-1] + arr[i-2];
			//cout<< arr[i-1] + arr[i-2]<<endl;
		}
	}
	cout<<arr[n-1];
}

int main(){
	int n;
	cin>>n;
	fibonacci(n);
}
