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
    const int N = 10000000000 


    
    for(long int i = 0; i < 1e10; i++){ // additions
        a+=b;
        
    }
    for(long int i = 0; i < 5e9;i++){ // multiplications
        a*=b; 
    }
    for(long int i = 0; i < 2e9; i++){ // divisions 
        a/=b;
    }
    

    return 0; 
}


