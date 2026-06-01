#include<iostream>
using namespace std;
int main(){
//variables
float temp;
cout<<"\n\t\t*******\tTEMPERATURE CLASSIFICATION\t*******\t\n";
cout<<"\n ENTER YOUR SURROUNDING TEMPERATURE :";
cin>>temp;
//classifying temp
if(temp>30){
cout<<"\n WEATHER IS HOT";
}
else if(temp>=20 && temp<30){
cout<<"\n WEATHER IS PLEASANT";
}
else{
cout<<"\n WEATHER IS COLD";
}
}

