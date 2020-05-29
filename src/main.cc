#include <iostream>
#include <string>

int fib(int n);

int tailingFib(int n);
int go(int n, int a, int b);

int main(){
    std::cout << "running fib() on what ?" << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Which fib version should be used (trailing recursion = 0) (simple recursion = 1)";

    int fibversion;
    std::cin >> fibversion;
    if(fibversion == 0)
        std::cout << tailingFib(n);
    else if(fibversion == 1)
        std::cout << fib(n);
    std::getchar();
    return 0;
}

int fib(int n){
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2);
}

int go(int n, int a, int b){
    if(n == 0){
        return a;
    }
    if(n == 1){
        return b;
    }
    return go(n-1, b, a+b);
}

int tailingFib(int n){
    return go(n, 0, 1);
}