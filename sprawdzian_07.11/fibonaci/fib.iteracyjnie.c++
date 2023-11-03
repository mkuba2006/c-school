#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int a = 0, b = 1, result;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout<< fib(n);
    return 0;
}
