#include <iostream>
#include <fstream>
#include <time.h>
using namespace std; 

int main(){
    clock_t t1, t2; 
    int readTemp;
    t1 = clock();
    // generate binary file "file.bin"
    fstream file("file.bin",ios::binary | ios::out); 
    //fstream to accomodate both reading and writing to the file 

    // define buffer of 100 bytes
    char buffer[100];


    // write loop 
    for(int i = 0; i < 1000000000/100;i++){  
    //loop will run 1000000000 times, working with 100 bytes every iteration
    
        // fill buffer with data
        for(int j = 0; j < 100;j++){
            buffer[j] = i % 26 + 'a'; // random information 
        }

        
        file.seekp(i*100); // update position indicator 
        file.write(buffer,100); // write contents of bufer to file
     }


     // read loop
     for(int i = 0; i < 1000000000/100;i++){
        file.seekg(i*100); // update position indicator
        file.read(buffer,100); // read from file, 100 bytes at a time
     }

        t2 = clock();
        float diff((float)t2-(float)t1);
        float seconds = diff / CLOCKS_PER_SEC;
        cout << "Time taken:" << seconds << "s" << endl; 
     

    return 0; 
}