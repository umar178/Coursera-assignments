#include<iostream>
using namespace std;

void fibonacci(int n){
    if (n <= 1) {cout<<n;}

    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        int temp = (prev + curr) % 10;
        prev = curr;
        curr = temp;
    }

    cout<< curr;
}

int main(){
	int n;
	cin>>n;
	fibonacci(n);
}
