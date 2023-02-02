#include <iostream>
#include <fstream>
#include <time.h>
using namespace std; 

/*
this program looks very similar to hardDrive1 because we are doing the same thing, except with more bytes at a time 
*/

int main(){

    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // generate binary file "file2.bin"
    fstream file("file2.bin",ios::binary | ios::out); 

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

    // read loop 
    for(int i = 0; i < 1000000000/10000;i++){
        file.seekg(i*10000); // update position indicator
        file.read(buffer,10000); // read from file, 10000 bytes at a time

    }
    
    t2 = clock();
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cout << "Time taken:" << seconds << "s" << endl; 

    return 0; 
}