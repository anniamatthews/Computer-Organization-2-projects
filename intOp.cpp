// 32-bit Integer operation benchmark

// 10^10 additions of integer constants 
// 5*10^9 multiplications of integer constants
// 2*10^9 divisions of integer constants 
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std; 


int main(){
    // start timer: 
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();
    
    // create two variables to perform operations on 
    long int left = 0; 
    long int right = 1; 
    
    // set # of iterations for loops 
    long int N = 10000000000; // number of additions
    long int M = 5000000000; // number of multiplications
    long int K = 2000000000; // number of divisions
    
    // additions
    for(long int i = 0; i < N; i++){ 
        left+=right;  
    }

    // multiplications
    for(long int i = 0; i < M;i++){ 
        left*=right; 
    }

    // divisions
    for(long int i = 0; i < K; i++){ 
        left/=right;
    }

    // end clock 
    t2 = clock();

    // calculate time
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;

    // print time taken 
    cout << "Time taken:" << seconds << "s" << endl; 


    

    return 0; 
}


