#include <iostream>
#include <time.h>
using namespace std; 

int main(){
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
    return 0; 
}