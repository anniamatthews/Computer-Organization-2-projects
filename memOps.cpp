#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std; 

int main(){
    clock_t t1, t2; 
    int readTemp; 
    int* arr = new int[5e9];
    t1 = clock();
    for(long long int i = 0; i < 5e9; i++){
        readTemp = arr[i];
    }
    t2 = clock();
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cout << "Time taken:" << seconds << "s" << endl; 
    


    return 0; 
}