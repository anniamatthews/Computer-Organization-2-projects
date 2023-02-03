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

    





    

    return 0; 
}