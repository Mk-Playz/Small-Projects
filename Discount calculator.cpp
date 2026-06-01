#include<iostream>
using namespace std;
int main(){
//variables
int amount;
cout<<"\n\t\t*******\tDISCOUNT CALCULATOR\t*******\t\n";
cout<<"\n ENTER YOUR SHOPPING AMOUNT :";
cin>>amount;
//calculating discount
if(amount>=5000){
cout<<"\n YOU GOT 20% DISCOUNT";
}
else if(amount>=2000 && amount<5000){
cout<<"\n YOU GOT 10% DISCOUNT";
}
else{
cout<<"\n NO DISCOUNT";
}
}
