#include <iostream>
using namespace std;


unsigned int fibo(int num) {
    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return fibo(num-1) + fibo(num-2);
    }
}
int main(){
    int inputNumber;
    scanf("%d", &inputNumber);

    printf("%u\n", fibo(inputNumber));

    return 0;
}