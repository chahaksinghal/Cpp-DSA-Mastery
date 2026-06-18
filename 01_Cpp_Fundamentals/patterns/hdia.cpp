#include <iostream>
using namespace std;
int i,j,n;
int main(){
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for( j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }    
        cout<<endl;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<i+2;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(j=0;j<2*(n-i)-5;j++){       //2*((n-2)-i)-1
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}