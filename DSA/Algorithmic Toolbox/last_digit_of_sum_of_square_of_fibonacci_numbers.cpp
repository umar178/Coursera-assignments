#include<iostream>
using namespace std;

int sum_array(int *arr, int n){
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	return sum;
}

void fibonacci_fast(int n, int m){
    if (n <= 1) {cout<<n; return;}
    
	int arr[n+1];

    int prev = 0, curr = 1;
    arr[0] = 0; arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        int temp = (prev + curr) % m;
        prev = curr * curr;
        curr = temp * temp;
        arr[i] = temp * temp;
    }
    
    cout<<sum_array(arr, n+1) % 10;
}

int main(){
	long long n;
    cin >> n;

    n = (n + 2) % 60; 

    fibonacci_fast(n, 10);

}
