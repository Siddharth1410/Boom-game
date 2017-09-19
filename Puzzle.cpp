#include<iostream>
#include<string>
#include<exception>
#include "Puzzle.h"
#include <stdexcept>
using namespace std;


bool Puzzle::guess(char c){
    if(!(c>='a'&&c<='z')){
    throw std::runtime_error("Invalid character - try again later");
    }
    else{
    int i; 
    bool result=false;
    for(i=0;i<solution.length();i++)
    {
        if(c==solution.at(i))
            result=true;
    }
    guesses[c]=true;
	   return result;
}}


bool Puzzle::solve(string proposed_solution){
    if(proposed_solution==solution)
        return true;
    else
        return false;
    

}
string Puzzle::to_string(){
    string test;
    test=solution;
    int i;	
    for(i=0;i<solution.length();i++)
    {
        if(solution.at(i)!=' ')
            test.at(i)='_';

    }    
    
    
    for(i=0;i<solution.length();i++)
    {
        if(guesses[solution.at(i)])
            {
                test.at(i)=solution.at(i);
            }

    }
    
	return test;
}
string Puzzle::get_solution(){
    return solution;
}

