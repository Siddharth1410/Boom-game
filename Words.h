#pragma once
#include<fstream>
class Words{
public:
    Words(string filename);
    string get_words();
private:
    ifstream myFile;
    vector<string> _words;   
    
};
