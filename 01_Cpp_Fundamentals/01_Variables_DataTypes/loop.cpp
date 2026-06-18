#include <iostream>
using namespace std;
int main(){
    int n,i,opt,sum=0 ;
    cout<<"enter the num till u want sum = ";
    cin>>n;

    cout<<"select  if you want sum of odd no.s as 1 or sum of even no.s as 2 = ";
    cin>>opt;

                                                  /*odd sum by while loop*/
    if(opt==1){
        i=1;
        while(i<=n){
            if(i%2!=0){
                sum+=i;
            }
            i++;
        } 
        cout<<"sum of odd no. is =  "<<sum;


    }else if(opt==2){                            /*even sum by for loop*/
        for(i=1;i<=n;i++){
            if(i%2==0){
                sum+=i;
            }
        }
        cout<<"sum of even no. is = "<<sum;


    }else{
            cout<<"!!invalid option!!";
    }
 return 0;

}