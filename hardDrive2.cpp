#include <iostream>
#include <fstream>
#include <time.h>
using namespace std; 

/*
this program is very similar to that of hardDrive1.cpp 
because we are changing the amount of bytes we are working with at a time to be 10000 instead of 100
*/

int main(){

    // generate binary file "file.bin"
    fstream file("file.bin",ios::binary | ios::out); 

    // define buffer of 10000 bytes
    char buffer[10000];

    // write loop 
    for(int i = 0; i < 1000000000/10000;i++){ // working with 10k bytes at a time so the execution should be a lot faster 

        // fill buffer with data
        for(int j = 0; j < 10000;j++){
            buffer[j] = i % 26 + 'a'; // random information 
        }

        file.seekp(i*10000); // update position indicator 
        file.write(buffer,10000); // write contents of bufer to file
    }


    return 0; 
}