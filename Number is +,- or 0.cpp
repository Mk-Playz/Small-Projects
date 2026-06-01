#include<iostream>
using namespace std;
int main(){
//variables
float num;
cout<<"\n\t\t*******\tFINDING NUMBER IS +,- OR 0\t*******\t\n";
//taking input
cout<<"\n ENTER THE VALUE OF NUM :";
cin>>num;
//finding pos,neg or zero
if(num>0){
cout<<"\n NUMBER IS POSITIVE";
}
else if(num<0){
cout<<"\n NUMBER IS NEGATIVE";
}
else{
cout<<"\n NUMBER IS ZERO";
}
}
