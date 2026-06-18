#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    for(int i=0;i<n;i++){
        int j,m=1;
        for( j=1;j<n-i;j++){
            cout<<"  ";
        }
        for(j=0;j<i+1;j++){
            cout<<m<<" ";
            m++;
        }
        for(j=i;j>0;j--){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}