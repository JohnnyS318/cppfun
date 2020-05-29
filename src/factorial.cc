#include <iostream>

int tailingFactorial(int n);
int go(int n, int a);
int recursiveFactorial(int n);

int main(){
    std::cout << "What number should be factoriated" << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Trailing recursion (0) or simple recursion (1) ?" << std::endl;
    int version;
    std::cin >> version;

    if(version == 0)
        std::cout << tailingFactorial(n);
    else if(version == 1)
        std::cout << recursiveFactorial(n);
    
    std::getchar();
    return 0;
}

int tailingFactorial(int n){
    return go(n, 1);
}

int go(int n, int a){
    if(n == 1)
        return a;
    return go(n-1, n*a);
}

int recursiveFactorial(int n){
    if(n == 1)
        return 1;
    return n * recursiveFactorial(n-1);
}
