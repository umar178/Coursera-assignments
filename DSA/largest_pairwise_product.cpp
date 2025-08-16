#include<iostream>
using namespace std;

int main(){
	long long b = 0, s_b = 0;
	int n;
	int b_i;
	int *num;
	
	cin>>n;
	num = new int[n];
	for(int i = 0; i<n; i++){
		cin>>num[i];
	}
	
	for(int i = 0; i < n; i++){
		if(num[i]>b){
			b=num[i];
			b_i = i;
	}
	}
	for(int i = 0; i < n; i++){
		if(num[i]>s_b && (num[i]<=b) && (i != b_i))
			s_b=num[i];
	}
	
	cout<<b*s_b;
}
