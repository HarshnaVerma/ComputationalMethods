#include<iostream>
using namespace std;

int main(){
    string binary = "";
    long float decimal = 0, temp;
    cout<<"Enter Decimal Number : ";
    cin>>decimal;
    while(decimal){
        temp = (decimal % 2) + '0';
        binary = (char)temp + binary;
        decimal /= 2;
    }
    cout<<"Converted Binary number is : "<<binary<<"\n";
    return 0;
}

