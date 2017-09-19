#include<iostream>
#include<string>
#include"Fuse.h"
using namespace std;
bool Fuse::burn(){
if(time==0)
    return false;
else
{
    time--;
    return true;
}


}
string Fuse::to_string(){
    if(time==0)
        return "*";
    string re(time+1,'_');
    int i;
    /*for(i=0;i<time-1;i++)
    {
        re.at(i)='_';
    }*/
    re.at(time)='*';
    return re;
}
