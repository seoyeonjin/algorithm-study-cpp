#include <iostream>

using namespace std;

unsigned long long factorial(int num) {
    if (num == 0){
        return 1;
    } else if (num == 1){
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

int main() {
    unsigned int number;

    scanf("%d", &number);
    
    
    printf("%llu\n", factorial(number));
    return 0;
}