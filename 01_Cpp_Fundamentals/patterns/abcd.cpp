#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter how many lines you want to print"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch ='A';
        for(int j=0;j<n;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}