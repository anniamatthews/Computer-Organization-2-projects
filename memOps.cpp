#include <iostream>
#include <time.h>
using namespace std; 

int main(){

    // start timer: 
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // define array of type char with size 5e9
    constexpr int N = 5000000000;
    char *array = new char[N]; // dynamically allocate memory for the array to handle large size 

    // write into array 
    for(int i = 0; i < N; i += 4){
        // write 4 byte string 'abcd' into array 4 bytes at a time
        memcpy(array + i, 'abcd', 4);
    }

    // read from array 
    for(int i = 0; i < N; i += 4){
        
        // temporary buffer to work with current 4 bytes
        char buffer[5]; // size 5 to offset the null terminator 5th element

        // copy 4 bytes of data from array starting at index 'i' to the buffer
        memcpy(buffer, array+i, 4); 

        buffer[4] = '\0';
    }

    // deallocate array of memory
    delete[] array; 

    // end clock 
    t2 = clock();

    // calculate time
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;

    // print time taken 
    cout << "Time taken:" << seconds << "s" << endl; 

    return 0; 
}