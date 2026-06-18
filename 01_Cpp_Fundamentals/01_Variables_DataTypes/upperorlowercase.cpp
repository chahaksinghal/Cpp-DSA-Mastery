#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
    if (ch>=65 && ch<=90){       // using ACII values and implicit
        cout<<"the give character is in uppercase"<<endl;
    }else if ((int)ch>=97 && (int)ch<=122){                
        cout<<"the given character is in lowercase"<<endl;
    }else{
        cout<<"!!invalid character!!"<<endl;
    }
}