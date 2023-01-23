// 32-bit Integer operation benchmark

// 10^10 additions of integer constants 
// 5*10^9 multiplications of integer constants
// 2*10^9 divisions of integer constants 
#include <iostream>
#include <chrono>
#include <stdio.h>
using namespace std; 

int main(){
    long int left = 10; 
    long int right = 15; 

    return 0; 
}

void ops(long int a, long int b){
    for(int i = 0; i < 1e10; i++){
        a + b; 
    }
    for(int i = 0; i < 5*(1e9);i++){
        a * b; 
    }
    for(int i = 0; i < 2*(1e9);i++){
        a / b; 
    }
}
