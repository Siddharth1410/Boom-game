#include<iostream>
#include"Words.h"
#include<time.h>
#include<fstream>
using namespace std;
Words::Words(string filename):myFile(filename)
{

string line;  
        while(std::getline(myFile,line))
        {
            _words.push_back(line);
        }
    
}    
string Words::get_words(){
srand(time(NULL));
int i=rand()%_words.size();
return _words[i];


}
