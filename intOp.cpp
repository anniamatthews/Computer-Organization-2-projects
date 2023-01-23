// 32-bit Integer operation benchmark

// 10^10 additions of integer constants 
// 5*10^9 multiplications of integer constants
// 2*10^9 divisions of integer constants 
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std; 


int main(){
    // create two variables to add 
    long int a = 0; 
    long int b = 1; 

    // start measuring the time 
    clock_t tStart = clock();
    for(long int i = 0; i < 1e10; i++){ // additions
        a+=b;
        
    }
    for(long int i = 0; i < 5e9;i++){ // multiplications
        a*=b; 
    }
    for(long int i = 0; i < 2e9; i++){ // divisions 
        a/=b;
    }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0; 
}


