#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter any number = "<<endl;
    cin>>n;
    bool isPrime = true;
    for(i=2;i*i<=n;i++){             // or we can also use i<=n-1
        if(n%2==0){
            isPrime= false;
            break;
        }
    }
    if(isPrime==false){
        cout<<"the given num "<<n<<" is non Prime num "<<endl;
    }else{
        cout<<"the given num "<<n<<" is Prime num"<<endl;
    }
   
    return 0;
}