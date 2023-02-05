#include <iostream>
#include <stdio.h>
#include<time.h>
using namespace std; 

int main(){
    // this program is a slightly modified version of the integer operations benchmark 

    // create two variables to perform operations on 
    double left = 0; // left hand operand 
    double right = 1; // right hand operand

    // set number of iterations for loops...same amount as the integer operations
    long int N = 10000000000; // number of additions
    long int M = 5000000000; // number of multiplications
    long int K = 2000000000; // number of divisions

    // start timer: 
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // additions 
    for(long int i = 0; i < N; i++){ 
        left+=right;   // adding b into a 
    }

    // multiplications 
    for(long int i = 0; i < M; i++){ 
        left*=right;
    }

    // divisions
    for(long int i = 0; i < K;i++){  
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