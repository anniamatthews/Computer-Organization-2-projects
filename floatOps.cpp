#include <iostream>
#include <stdio.h>
#include<time.h>
using namespace std; 

int main(){
    // this program is a modified version of the integer operations benchmark 

    // create two variables to perform operations on 
    double left = 0; // left hand operand 
    double right = 1; // right hand operand

    
    
    for(long int i = 0; i < 1e10;i++){ //additions
        left+=right;   // adding b into a 
    }
    for(long int i = 0; i < 5e9;i++){ // multiplications
        left*=right;
    }
    for(long int i = 0; i < 2e9;i++){ //divisions 
        left/=right;
    }
    


    return 0; 
}