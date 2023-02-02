#include <iostream>
#include <fstream>
using namespace std; 

int main(){
    // generate binary file "file.bin"
    ofstream file("file.bin",ios::binary | ios::out);

    // define buffer of 100 bytes
    char buffer[100];

     for(int i = 0; i < 1000000000/100;i++){
        // fill buffer with data
        for(int j = 0; j < 100;j++){
            buffer[j] = i % 26 + 'a';
        }

        //write contents of buffer to file 
        file.write(buffer,100); 

     }
     file.close();





    return 0; 
}