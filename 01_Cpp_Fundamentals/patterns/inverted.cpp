#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){       //loop for null spaces
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){     //loop for printing no.s
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}