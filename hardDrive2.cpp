#include <iostream>
#include <fstream>
#include <time.h>
using namespace std; 

/*
this program looks very similar to hardDrive1 because we are doing the same thing, except with more bytes at a time 
*/

int main(){

    // generate binary file "file2.bin"
    fstream file("file2.bin",ios::binary | ios::out); 

    // define buffer of 10000 bytes
    char buffer[10000];

    // start clock 
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();

    // write loop 
    for(int i = 0; i < 1000000000/10000;i++){ // working with 10k bytes at a time so the execution should be a lot faster 

        // fill buffer with data
        for(int j = 0; j < 10000;j++){
            buffer[j] = i % 26 + 'a'; // random information 
        }

        // update position indicator 
        file.seekp(i*10000); 

        // write contents of buffer to file 
        file.write(buffer,10000); 

    }

    // read loop 
    for(int i = 0; i < 1000000000/10000;i++){
        
        // update position indicator
        file.seekg(i*10000); 

        // read from file 10000 bytes at a time 
        file.read(buffer,10000); 

    }
    
    // end clock 
    t2 = clock();

    // calculate time
    float diff((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;

    // print time taken 
    cout << "Time taken:" << seconds << "s" << endl;

    return 0; 
}