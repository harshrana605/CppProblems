#include <iostream>
#include <string>
using namespace std;
class StringMAnipulator {
    private : 
    string input ; 
    string reversed ; 

    public :

        void setInput(){
            cout << "enter a string : "; 
            getline(cin , input);
        }
        void reversedString(){
            reversed = "" ;
            for(int i = input.length() - 1 ; i >=0 ; i--){
                reversed += input[i];
            }
        }
        void printString(){
            cout << reversed ;
        }
};

int main(){

    StringMAnipulator sm ;

    sm.setInput() ; sm.reversedString() ; sm.printString ();




    return 0 ;
}