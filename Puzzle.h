#pragma once
using namespace std;

class Puzzle{
    private:
        string solution;   
        bool guesses[255];
    public:
        Puzzle(string solution): solution{solution},guesses{false} {

        }
	bool guess(char c);
        bool solve(string proposed_solution);
        string to_string();
        string get_solution();
   

};
