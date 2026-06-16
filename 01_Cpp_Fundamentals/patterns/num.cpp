#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter how many lines you want to print"<<endl;
    cin>>n;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            cout<<m<<"   ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}