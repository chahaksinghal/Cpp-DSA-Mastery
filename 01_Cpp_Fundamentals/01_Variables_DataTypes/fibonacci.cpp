#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want from fibonacci series:";
    cin>>n;
    //1. edge case handling 
    if (n<=0){
        cout<<"please enter a positive integer greater than 0."<<endl;
        return 0;
    }
    //2. using 64-bit integers to prevent early negative -number overflow 
    long long frst=0;
    long long secd=1;
    cout<<"the fiboncci series is: \n";
    //3. clean,single-loop logic without dulicate print statements
    for (int i = 0 ; i < n ; i++ ){
        cout << frst;
        //print a comma only if its not the very last element
        if (i < n-1){
            cout << "\n";
        }
        //calculate next term and shift variables forward
        long long next = frst + secd;
        frst=secd;
        secd=next;
    }
    cout<<endl;
    return 0;
}