#include <iostream>    
#include <fstream>
#include <cctype>
using namespace std;
int main () 
{
    ifstream ifile;
    ifile.open ("text.txt");
    char last;
    ifile.ignore (256, ' '); 
    last = ifile.get();  
    cout<< "Your initial is " << last << '\n';
    ifile.close();
    return 0;
}

