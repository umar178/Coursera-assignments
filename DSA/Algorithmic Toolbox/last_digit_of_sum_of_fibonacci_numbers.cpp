#include <iostream>
using namespace std;

int fibonacci_mod(long long n, int m) {
    if (n <= 1) return n;

    int prev = 0, curr = 1;
    for (long long i = 2; i <= n; i++) {
        int temp = (prev + curr) % m;
        prev = curr;
        curr = temp;
    }
    return curr;
}

int main() {
    long long n;
    cin >> n;

    long long reduced = (n + 2) % 60;

    int fib_mod = fibonacci_mod(reduced, 10);

    int last_digit_sum = (fib_mod - 1 + 10) % 10;
    cout << last_digit_sum << endl;
}
