#pragma once
using namespace std;

class Fuse{
    private:
        int time;
    public:
        Fuse(int time): time{time}{}
        bool burn();
        string to_string();



};
