#include<iostream>
using namespace std;

unsigned long long gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;
    }
    return a;
}


unsigned long long lcm(int a, int b){
	return (a/gcd(a,b))*b;
}

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<lcm(a,b);
}
