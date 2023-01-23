#include <iostream>
#include <stdio.h>
#include<time.h>
using namespace std; 

int main(){
    double a = 0; 
    double b = 1; 
    clock_t tStart = clock(); // start the clock 
    for(long int i = 0; i < 1e10;i++){ //additions
        a+=b;   // adding b into a 
    }
    for(long int i = 0; i < 5e9;i++){ // multiplications
        a*=b;
    }
    for(long int i = 0; i < 2e9;i++){ //divisions 
        a/=b;
    }
    // stop recording time and print execution time 
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);


    return 0; 
}