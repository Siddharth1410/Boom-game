#include<iostream>
#include<algorithm>
#include"Fuse.cpp"
#include"Puzzle.cpp"
#include"Words.cpp"
using namespace std;
int main(int argc, char* argv[]){
    
    if(argv[1]==NULL)
    {
        cerr<<"Please give an argument\n";
        exit(EXIT_FAILURE);
    }
string l=argv[1];
    Words Words(l);
    string a=Words.get_words(); 
    Puzzle Puzzle{a};  
    bool b;  
    Fuse Fuse{10};
    string proposed_solution;
    char c=1;
    bool result;
	cout<<"PLEASE TURN ON YOUR SPEAKER!\n";
    cout<<"\t\t\t=========================\n"
    <<"\t\t\t\tB O O M !\n"<<"\t\t\t=========================\n"
    <<"Enter lower case letters to guess,\n"<<"! to propose a soution\n"<<"0 to exit.\n";
   
    
   while(c!='0')
    {   
try{
         cout<<"\n\n\n     "<<Fuse.to_string()<<"\n";
        cout<<"    /\n";
        cout<<" ,+,\n"
        <<" | |\n"
        <<" |_|\n";
    
    cout<<Puzzle.to_string()<<": ";
    cin>>c;


        
        if(c=='!')
        {	cin.ignore();
            cout<<"Enter a proposed solution:";
            getline(cin,proposed_solution);
            result=Puzzle.solve(proposed_solution);
            if(result)
            {
                cout<<"*** W I N N E R ***\n";
		system("canberra-gtk-play -f win.wav");
                break;
            }
            else{
                cout<<"###### BOOM ######\n"
                <<"The answer was: "<<Puzzle.get_solution()<<"\n";
		system("canberra-gtk-play -f gameover.wav");
                break;
            }
        }
            
            if(Puzzle.guess(c)==false){
		if(Fuse.burn()==false)
                {
                    if(Puzzle.solve(Puzzle.to_string()))
                        {
                            cout<<"*** W I N N E R ***\n";
				system("canberra-gtk-play -f win.wav");
                            break;
                        }
                    else{
                            cout<<"###### BOOM ######\n"
                            <<"The answer was: "<<Puzzle.get_solution()<<"\n";
			    system("canberra-gtk-play -f gameover.wav");
                            break;
                                    
                        }        
                }
                else if(Puzzle.solve(Puzzle.to_string())){
                    cout<<"*** W I N N E R ***\n";
			system("canberra-gtk-play -f win.wav");
                    break;
                }
                
			    
            }
		else{
			 if(Puzzle.solve(Puzzle.to_string()))
                        {
                            cout<<"*** W I N N E R ***\n";
				system("canberra-gtk-play -f win.wav");
                            break;
                        }
                    
		}
		
            //cout<<Puzzle.to_string()<<": ";
            //cin>>c;
            cout<<"\n";
                     
        
}	    
catch(std::exception &e)
{
cerr<<"Invalid character - try again\n";
}           
    }


}
