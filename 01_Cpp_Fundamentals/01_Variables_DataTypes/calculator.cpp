#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;

    cout<<"enter first number:"<<endl;
    cin>>num1;

    cout<<"enter second number"<<endl;
    cin>>num2;

    cout<<"enter an operator(+,-,*,/):"<<endl;
    cin>>op;

    if( op=='+'){
        cout<<"result: "<<num1+num2<<endl;
    } else if(op=='-'){
        cout<<"result: "<<num1-num2<<endl;
    } else if( op=='*'){
        cout<<"result: "<<num1*num2<<endl;
    }else if ( op=='/'){
        cout<<"result: "<<num1/num2<<endl;
    }else{
        cout<<"!!!!!!INVALID OPERATOR!!!!!!"<<endl;
    }

    return 0;
}