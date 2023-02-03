// 32-bit Integer operation benchmark

// 10^10 additions of integer constants 
// 5*10^9 multiplications of integer constants
// 2*10^9 divisions of integer constants 
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std; 


int main(){
    // create two variables to perform operations on 
    int left = 0; // left hand operand 
    int right = 1; // right hand operand
    const int N = 10000000000; // number of additions
    const int M = 5000000000; // number of multiplications
    const in K = 2000000000; // number of divisions
    
    for(long int i = 0; i < N; i++){ // additions
        a+=b;
        
    }
    for(long int i = 0; i < M;i++){ // multiplications
        a*=b; 
    }
    for(long int i = 0; i < K; i++){ // divisions 
        a/=b;
    }
    

    return 0; 
}


