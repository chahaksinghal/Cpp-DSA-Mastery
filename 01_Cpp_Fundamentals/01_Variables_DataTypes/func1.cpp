//ques sum of digits
#include <iostream>
using namespace std;
int sumOfDigits(int num){
    int sum = 0;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    return sum;
}
int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
    cout<<"sum od digits is : "<<sumOfDigits(x);
    return 0;
}