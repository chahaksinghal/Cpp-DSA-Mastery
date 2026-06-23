#include <iostream>
using namespace std;
int binocoff(int n,int r){
    int i,nFact=1,rFact=1,sFact=1;
    for(i=1;i<=n;i++){
        nFact*=i;
    }
    for(i=1;i<=r;i++){
        rFact*=i;
    }
    for(i=1;i<=(n-r);i++){
        sFact*=i;
    }
    int nCr=nFact/(rFact*sFact);
    return nCr;
}
int main(){
    int n,r;
    cout<<"write value of n and r in nCr,\nn= ";
    cin>>n;
    cout<<"r= ";
    cin>>r;
    cout<<"the binomial coeff is: "<<binocoff(n,r)<<endl;
    return 0;
}