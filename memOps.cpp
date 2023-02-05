#include <iostream>
#include <time.h>
#include <cstring>
using namespace std; 

int main(){

    // start timer: 
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // loop over a 5*10^4 sized array 10^5 times

    // end clock 
    t2 = clock();

    // calculate time
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;

    // print time taken 
    cout << "Time taken:" << seconds << "s" << endl; 

    return 0; 
}