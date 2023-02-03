#include <iostream>
#include <stdio.h>
#include <time.h>
#include <vector>
using namespace std; 

int main(){
    // start timer
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // declare array 
    vector<int> arr(5000000000); // change this back to an array 
    for(long long int i = 0; i < arr.size(); i++){
        readTemp = arr[i];
    }
    t2 = clock();
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cout << "Time taken:" << seconds << "s" << endl; 
    


    return 0; 
}